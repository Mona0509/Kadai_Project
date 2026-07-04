
#include <iostream>
#include "Input.h"
#include "RandomEnemy.h"
#include "Character.h"
#include "PlayerAttack.h"
#include "AttackTurn.h"
#include "EnemyAttack.h"

int main()
{
    PlayerAttack* attackChar = new PlayerAttack;
	EnemyAttack* enemyChar = new EnemyAttack;
	Character* character = new Character;
	AttackTurn* attackTurn = new AttackTurn;
	while (true)
	{
		character->OpenStatus();

		// キャラと行動の選択
		InputChar(&attackChar->_allyName);
		InputAction(&attackChar->_allyAction);
		RandomChoose(&enemyChar->_enemyName);
		RandomAction(&enemyChar->_enemyAction);

		attackTurn->ActionStart();
	}
}


//
// 構造体を2つ作成
// 1つ目構造体には、攻撃力(キャラクター分)
// 2つ目構造体には、戦力(陣営分なので2つ分)
// 剣士、魔法使い、召喚士の3体分のStatus変数を作成
// キャラクターの行動は攻撃と防御
// 陣営の初期戦力は300
// キャラの攻撃は陣営全員の合計が100になるようにする
// ※可能な限り「だれが行動したか」「行動結果」「戦力などの減少」などを表示
//


//
// 初期設定
// クラス毎にファイルを分割する事
// newインスタンスでキャラを作成
// 必ずdeleteすること
// アクセス指定子をpublicのみにしないこと
//


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


//
// ゲームの進行
// 1.味方陣営から一人選び、行動を設定する 
// 2.敵陣営からランダムに一人選ばれ、ランダムに行動が設定される 
// 3.上記の二名が設定された行動を取り、ルールに基いて陣営の「戦力」を削りあう 
// 4.３までを「1ターン」とし、ターンを繰り返して、先に相手陣営の「戦力」をゼロにした方が勝ち
//


//
// 実装条件
// 
// 基本ルールまでを実装
// 
// 何らかの実装に継承と仮想関数を活⽤する事
// キャラクターはnew / delete でインスタンス化する事
// キャラクターインスタンスはスマートポインタで管理する事
// 各クラスのメンバのアクセス指定⼦を適切に指定する事（public のみにしない）
// クラス毎にファイルを分割する事
// stl を活⽤する事
//