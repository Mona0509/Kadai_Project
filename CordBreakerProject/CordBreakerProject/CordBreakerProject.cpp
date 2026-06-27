#include "Random.h"
#include "Input.h"
#include "NumComparison.h"
#include "LastAnswer.h"
#include <iostream>


int main()
{
	Random random;
	Check check;
	random.RandomCreate();
	bool clearCheck = false;

	while (!clearCheck)
	{
		Input input;

		input.InputCreate();

		NumComparison numCom;

		check.blowNum = 0;
		check.hitNum = 0;

		for (int i = 0; i < 4; i++) {
			int hitCheck = check.hitNum;
			check.hitNum += numCom.NumHitCheck(&random.randomNum_[i], &input.inputNum_[i]);
			if (hitCheck == check.hitNum) {
				check.blowNum += numCom.NumBlowCheck(
					&random.randomNum_[0],
					&random.randomNum_[1],
					&random.randomNum_[2],
					&random.randomNum_[3],
					&input.inputNum_[i]);
			}
		}
		LastAnswer lastAnswer;
		clearCheck = lastAnswer.OpenText(check.hitNum,check.blowNum,check.count);
		check.count++;
	}
	return 0;
}

//
// 0から9の中から数値を4つランダム抽選
// 数値を4回入力
// 4つのランダム数と、4つの入力数を比較する
// 桁と数が両方一致する場合、「ヒット」その個数を表示
// 桁が違う、数のみ一致の場合、「ブロー」その個数を表示
// 4つすべて「ヒット」となるまで繰り返す
// 繰り返した回数を表示してゲームクリア
//

//
// ランダムな値を生成、保持するクラスを用意
// 入力値を保持するクラスを用意
// ランダム値と入力数を比較し、判定結果を保持するクラスを用意
// i, ランダム値と入力値の情報はアドレスで受け取る
// ii,　判定結果は専用の構造体を用意してまとめる
// 判定結果変数の参照を受け取って表示するクラスを用意
//
