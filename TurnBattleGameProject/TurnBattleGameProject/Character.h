#pragma once
#include <iostream>
struct Status
{
	std::string name;
	int attack;
};

class Character
{
public:
	Character();
	~Character();

	int allHP = 100;
	int enemyAllHP = 100;

	// 行動者と行動
	char moveName = {};
	char actionName = {};

	char moveEnemyName = {};
	char actionEnemyName = {};

	virtual void SetStatus();
	virtual void OpenStatus();
	virtual bool StartAttack(const Status* enemyStatus);
	virtual bool Attack(const Status* enemyStatus);
	virtual bool Attack(const Status* attackStatus, int* hp);
private:
	bool DrawAction();
protected:
	std::string _name = {};
	int _attack = {};

	Status status = {};

};

//
// 構造体を2つ作成
// 1つ目構造体には、攻撃力(キャラクター分)
// 2つ目構造体には、戦力(陣営分なので2つ分)
// 剣士、魔法使い、召喚士の3体分のStatus変数を作成
 //キャラクターの行動は攻撃と防御
// 陣営の初期戦力は300
// キャラの攻撃は陣営全員の合計が100になるようにする
// ※可能な限り「だれが行動したか」「行動結果」「戦力などの減少」などを表示
// 
// 数値はintで計算する(仮)
//
