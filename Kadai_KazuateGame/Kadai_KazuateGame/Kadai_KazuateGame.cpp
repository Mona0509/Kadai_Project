// Kadai_KazuateGame.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include "input.h"
#include "judge.h"
int main()
{
	// 0から9ランダムで一つ数値を抽選する(input)
	int answer = RandomSystem();
	while (true)
	{
		// int型で入力感知を行う(input)
		int input = InputSystem();
		// 入力とランダム数を比較する(judge)
		int check = AnswerComparison(answer,input);
		// 一致していたら「ゲームクリア」と表示、終了(judge)
		// 入力数のほうが大きいなら「大きい」と表示(judge)
		// 入力数のほうが小さいなら「小さい」と表示(judge)
		bool clear = AnswerOpen(check);
		// 上記2つに当てはまっていたなら、入力判定に戻る
		if (clear) {
			break;
		}
	}
	return 0;
}


//
// ランダム抽選と数値入力は個別に関数化する
// 比較と結果表示の処理を個別に関数化する
// main関数ではinput.hとjudge.hをインクルードして各関数に利用する
//

