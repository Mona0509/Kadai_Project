#include "NumComparison.h"

int NumComparison::NumHitCheck(int* _answer, int* _input) {
	int answer = *_answer;
	int input = *_input;
	int num = 0;

	if (input == answer) {
		num++;
	}
	return num;
}

int NumComparison::NumBlowCheck(int* _answer1, int* _answer2, int* _answer3, int* _answer4, int* _input) {

	int answer1 = *_answer1;
	int answer2 = *_answer2;
	int answer3 = *_answer3;
	int answer4 = *_answer4;
	int input = *_input;
	int num = 0;

	if (input == answer1 || input == answer2 || input == answer3 || input == answer4) {
		num++;
	}
	return num;
}