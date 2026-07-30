#include "Input.h"
#include <iostream>
void InputChar(int* name) {
	std::cout << "\ns“®‚³‚¹‚½‚¢ƒLƒƒƒ‰‚ð”Žš‚ÅŽw’è‚µ‚Ä‰º‚³‚¢\n"
			<< "íŽm:     1\n" 
			<< "–‚–@Žg‚¢: 2\n"
			<< "¢Š«Žm:   3\n"
			<< std::endl;
	int chooseName;
	std::cin >> chooseName;
	*name = chooseName;
};

void InputAction(int* action) {
	std::cout << "uUŒ‚v‚©u–hŒäv‚ð”Žš‚ÅŽw’è‚µ‚Ä‚­‚¾‚³‚¢\n"
			<< "UŒ‚: 1\n" 
			<< "–hŒä: 2\n"
			<< std::endl;
	int chooseAction;
	std::cin >> chooseAction;
	*action = chooseAction;
}
