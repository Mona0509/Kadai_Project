#include "Character.h"
int Character::allHP = 100;
int Character::enemyAllHP = 100;
int Character::moveName = {};
int Character::actionName = {};
int Character::moveEnemyName = {};
int Character::actionEnemyName = {};

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

void Character::OpenHP() {
	std::cout << "–¡•ûw‰c‚Ìí—Í" << allHP << std::endl;
	std::cout << "“Gw‰c‚Ìí—Í" << enemyAllHP << std::endl;
	std::cout << std::endl;
}

bool Character::StartAttack(const Status* enemyStatus) {
	int* hitHp;
	int* attackHp;
	bool isFnish = false;

	if (actionName == actionEnemyName) {
		if (actionName == 1 && actionEnemyName == 1) 
		{
			Attack(enemyStatus);
		}
		else if (actionName == 2 && actionEnemyName == 2) 
		{
			isFnish = DrawAction();
		} 
	}
	else if(actionName == 1){
		hitHp = &enemyAllHP;
		attackHp = &allHP;
		Attack(&status,hitHp, attackHp);
	}
	else if(actionName == 2){
		hitHp = &allHP;
		attackHp = &enemyAllHP;
		Attack(enemyStatus, hitHp,attackHp);
	}

	if (allHP <= 0 || enemyAllHP <= 0) isFnish = true;

	return isFnish;
}

void Character::Attack(const Status* enemyStatus) {
	int attackPoint = status.attack - enemyStatus->attack;
	if (attackPoint == 0) DrawAction();

	else if(attackPoint > 0){
		enemyAllHP -= status.attack;
		std::cout << enemyStatus->name << "‚ÉƒqƒbƒgI" << std::endl;
		std::cout << "“Gí—Í‚ª" << enemyAllHP << "í‚ê‚½" << std::endl;
	}
	else if (attackPoint < 0) {
		allHP -= enemyStatus->attack;
		std::cout << enemyStatus->name << "‚ÉƒqƒbƒgI" << std::endl;
		std::cout << "–¡•ûí—Í‚ª" << allHP << "í‚ê‚½" << std::endl;
	}
}

void Character::Attack( const Status* attackStatus,int* hitHp,int* attackHp) {
	if (moveName == moveEnemyName) DrawAction();
	
	if (moveName == 1 && moveEnemyName == 2
		|| moveName == 2 && moveEnemyName == 3
		|| moveName == 3 && moveEnemyName == 1) CriticalAttack(attackStatus, hitHp);

	else if (moveName == 1 && moveEnemyName == 3
		|| moveName == 2 && moveEnemyName == 1
		|| moveName == 3 && moveEnemyName == 2) CounterAttack(attackStatus, attackHp);
}

void Character::CriticalAttack(const Status* attackStatus, int* hp) {
	hp = hp - attackStatus->attack * 2;
	std::cout << attackStatus << "‚ªƒNƒŠƒeƒBƒJƒ‹UŒ‚!" << std::endl;
	std::cout << "í—Í‚ª " << &hp << " í‚ê‚½" << std::endl;
}


void Character::CounterAttack(const Status* attackStatus,int* hp) {
	hp = hp - attackStatus->attack * 2;
	std::cout << attackStatus << "‚ªƒJƒEƒ“ƒ^[UŒ‚‚ð‚­‚ç‚Á‚½!" << std::endl;
	std::cout << "í—Í‚ª " << &hp << " í‚ê‚½" << std::endl;
}

bool Character::DrawAction() {
	std::cout << "ƒhƒ[ƒQ[ƒ€I" << std::endl;
	return false;
}
