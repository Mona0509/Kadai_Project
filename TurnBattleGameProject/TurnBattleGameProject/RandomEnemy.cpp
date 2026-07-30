#include "RandomEnemy.h"
#include <time.h>
#include "Character.h"

void RandomChoose(int* enemyName) {
	srand((unsigned int)time(NULL));
	int name = rand() % 3 + 1;
	*enemyName = name;
};

void RandomAction(int* enemyAction) {
	srand((unsigned int)time(NULL));
	int name = rand() % 2 + 1;
	*enemyAction = name;
};

