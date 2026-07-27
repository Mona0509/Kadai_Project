#include "RandomEnemy.h"
#include <time.h>

void RandomChoose(char* enemyName) {
	srand((unsigned int)time(NULL));
	char name = rand() % 3;;
	*enemyName = name;
};

void RandomAction(char* enemyAction) {
	srand((unsigned int)time(NULL));
	char name = rand() % 2;
	*enemyAction = name;
};

