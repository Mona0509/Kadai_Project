#pragma once
#include "AttackTurn.h"
class PlayerAttack : public AttackTurn
{
public:
	std::string _allyName = {};
	std::string _allyAction = {};
};

