#include "Character.h"
Character::Character(){
}

Character::~Character() {
}

void Character::SetStatus() {
	status = { _name,_attack};
}

void Character::OpenStatus() {
	std::cout << status.name << " : UŒ‚—Í " << status.attack << std::endl;
}

void Character::StartAttack() {
	
}
