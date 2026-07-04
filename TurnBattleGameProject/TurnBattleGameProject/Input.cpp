#include "Input.h"
#include <iostream>
void InputChar(std::string* name) {
	std::string chooseName;
	std::cin >> chooseName;
	*name = chooseName;
};

void InputAction(std::string* action) {
	std::string chooseAction;
	std::cin >> chooseAction;
	*action = chooseAction;
}
