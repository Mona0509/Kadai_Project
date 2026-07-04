#include "RandomEnemy.h"
#include <time.h>

void RandomChoose(std::string* enemyName) {
	srand((unsigned int)time(NULL));
	std::string name[3] = { "Œ•m","–‚–@g‚¢","¢Š«m" };
	*enemyName = name[rand() % 3];
};

void RandomAction(std::string* enemyAction) {
	srand((unsigned int)time(NULL));
	std::string name[2] = { "UŒ‚","–hŒä"};
	*enemyAction = name[rand() % 2];
};

