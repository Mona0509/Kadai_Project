#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
int RandomSystem() {
	// 時間で初期化
	srand((unsigned int)time(NULL));
	// 答え
	int answer = rand() % 10;
	return answer;
}
int InputSystem() {
	int input;
	printf("0～9の数字を一つ入力してください。\n");
	while (true)
	{
		// ユーザーの入力数値
		std::cin >> input;
		if (input > 9) {
			printf("数値が大きすぎます。\nもう一度入力してください。\n");
		}
		else {
			break;
		}
	}
	return input;
}

// 0から9ランダムで一つ数値を抽選する(input)
// int型で入力感知を行う(input)
