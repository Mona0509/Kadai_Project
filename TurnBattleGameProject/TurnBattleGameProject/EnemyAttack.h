#pragma once
#include "AttackTurn.h"

class EnemyAttack : public AttackTurn
{
public:
	std::string _enemyName = {};
	std::string _enemyAction = {};
};

