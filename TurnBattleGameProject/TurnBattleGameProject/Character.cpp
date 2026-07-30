#include "Character.h"
Character::Character(){
}

Character::~Character() {
}

void Character::SetStatus() {
	status = { _name,_attack};
}

void Character::OpenStatus() {
	std::cout << status.name << " : 攻撃力 " << status.attack << std::endl;
}

bool Character::StartAttack(const Status* enemyStatus) {
	int* hitHp;
	bool isFnish = false;

	if (actionName == actionEnemyName) {
		switch (moveName,moveEnemyName)
		{
		case (1,1):
			isFnish = Attack(enemyStatus);
			break;
		case (2, 2):
			isFnish = DrawAction();
			break;
		}
	}
	else if(actionName == 1){
		hitHp = &enemyAllHP;
		Attack(&status,hitHp);
	}
	else if(actionName == 2){
		hitHp = &allHP;
		Attack(enemyStatus, hitHp);
	}

	return isFnish;
}

bool Character::Attack(const Status* enemyStatus) {
	int attackPoint = status.attack - enemyStatus->attack;
	if (attackPoint == 0) return DrawAction();

	else if(attackPoint > 0){
		enemyAllHP -= status.attack;
	}
	else if (attackPoint < 0) {
		allHP -= enemyStatus->attack;
	}

	if (allHP <= 0 || enemyAllHP <= 0) return true;
	else return false;
}

// 防御側もステータスも参照する
bool Character::Attack(const Status* attackStatus, int* hp) {

}

bool Character::DrawAction() {
	std::cout << "ドローゲーム" << std::endl;
	return false;
}
