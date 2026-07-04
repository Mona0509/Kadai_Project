#pragma once
#include "AttackTurn.h"

class EnemyAttack : public AttackTurn
{
protected:
	int enemyAttackDmg;
public:
	std::string _enemyName = {};
	std::string _enemyAction = {};
};

