#include "Input.h"
#include <iostream>

void Input::InputCreate() {

	for (int i = 0; i < 4; i++) {
		std::cout << i + 1 << "‰ñ–Ú‚Ì“ü—Í‚ð‚µ‚Ä‚­‚¾‚³‚¢B" << std::endl;
		std::cin >> inputNum_[i];
	}
}
