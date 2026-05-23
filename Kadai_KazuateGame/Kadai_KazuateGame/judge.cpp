#include <stdio.h>
int AnswerComparison(int answerCheck,int inputCheck) {
	if (answerCheck == inputCheck) {
		answerCheck = 0;
	}
	else if (answerCheck < inputCheck) {
		answerCheck = 1;
	}
	else if (answerCheck > inputCheck) {
		answerCheck = 2;
	}

	// 0 = 正解、1 = 正解より大きい、2 = 正解より小さい
	return answerCheck;
}
bool AnswerOpen(int OpenCheck) {
	bool clearCheck = false;
	switch (OpenCheck)
	{
		case 0:
			printf("ゲームクリア!\n");
			clearCheck = true;
			break;
		case 1:
			printf("大きい\n");
			break;
		case 2:
			printf("小さい\n");
			break;
	}
	return clearCheck;
}

// 入力とランダム数を比較する(judge)

// 一致していたら「ゲームクリア」と表示、終了(judge)
// 入力数のほうが大きいなら「大きい」と表示(judge)
// 入力数のほうが小さいなら「小さい」と表示(judge)
// 上記2つに当てはまっていたなら、入力判定に戻る(judge)
