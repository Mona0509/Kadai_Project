#include "Input.h"
#include <iostream>
void InputChar(std::string* name) {
	std::cout << "行動させたいキャラの名前を入力してください"<<std::endl;
	std::string chooseName;
	std::cin >> chooseName;
	*name = chooseName;
};

void InputAction(std::string* action) {
	std::cout << "「攻撃」か「防御」を選んで、入力してください" << std::endl;
	std::string chooseAction;
	std::cin >> chooseAction;
	*action = chooseAction;
}
