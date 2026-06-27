#include "LastAnswer.h"
#include <iostream>

bool LastAnswer::OpenText(int hitCount, int blowCount,int countCheck) {
	std::cout << "ヒット数:" << hitCount << std::endl;
	int blowNum = blowCount - hitCount;
	if (blowNum < 0) blowNum = 0;
	std::cout << "ブロー数:" << blowNum << std::endl;
	if (hitCount == 4) {
		std::cout << "ゲームクリア" << std::endl;
		std::cout << countCheck + 1 <<"周回目" << std::endl;
		return true;
	}
	return false;
}
