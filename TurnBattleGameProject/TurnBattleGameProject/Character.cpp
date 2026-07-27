#include "Character.h"
#include <iostream>
Character::Character() {
	sword = { name.name1, 30 };
	wizard = { name.name2, 45 };
	summoner = { name.name3, 25 };
	allHP = 100;

	enemySword = { name.name1, 30 };
	enemyWizard = { name.name2, 55 };
	enemySummoner = { name.name3, 15 };
	allEnemyHp = 100;
};

Character::~Character() {

}

void Character::OpenStatus() {
	std::cout << "í—Í: " << allHP<< std::endl;
	std::cout << "UŒ‚—Í" << std::endl;
	std::cout << "Œ•Žm: "<< sword.attack << std::endl;
	std::cout << "–‚–@Žg‚¢: "<< wizard.attack << std::endl;
	std::cout << "¢Š«Žm: "<< summoner.attack << std::endl;
}
