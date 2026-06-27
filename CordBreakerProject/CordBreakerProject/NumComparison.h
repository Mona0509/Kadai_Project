#pragma once
struct Check {
	int hitNum = 0;
	int blowNum = 0;
	int count = 0;
};

class NumComparison
{
public:
	int NumHitCheck(int* _answer,int* _input);
	int NumBlowCheck(
		int* _answer1,
		int* _answer2,
		int* _answer3,
		int* _answer4,
		int* _input);
public:
	Check check;
};

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
