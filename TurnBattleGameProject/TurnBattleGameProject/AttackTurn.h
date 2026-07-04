#pragma once
#include <iostream>
class AttackTurn
{
protected:
	virtual void ChooseChar();
	virtual void ActionChar();
protected:
	bool winCheck;
};




//
// ループ内容
// 
// 入力で味方陣営から1人選ぶ
// 攻撃か防御か選ぶ
// 敵陣営からランダムに1人選ぶ
// 攻撃か防御かランダムに選ぶ
// stringかchar型でキャラの名前と行動を保持
// switchで分岐させる
// 勝ったほう(攻撃出来たほう)を判定
// もしお互いの攻撃力が一致していたら、スキップ
// 戦力と攻撃力の減少を算出
// どちらかの戦力が0になっていればターン終了
// 終了条件を満たせていなければ、ターン続行
//
