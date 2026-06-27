#include "Input.h"
#include <iostream>

void Input::InputCreate() {

	for (int i = 0; i < 4; i++) {
		std::cin >> inputNum_[i];
	}
}