#include "Random.h"
#include <stdlib.h>
#include <time.h>

void Random::RandomCreate() {
	
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 4; i++) {
		randomNum_[i] = rand() % 10;
	}
}