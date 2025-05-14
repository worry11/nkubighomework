#include "Chessgame.h"

ChessGame::ChessGame(player* man, AI* ai, Chess* chess)
{
	this->man = man;
	this->ai = ai;
	this->chess = chess;
	man->init(chess);  //初始化棋手
	ai->init(chess);  //初始化棋手
}

void ChessGame::play()
{
	chess->init();
	while (1)
	{
		man->go();
		if (chess->checkOver())
		{
			chess->init();
			continue;
		}
		ai->go();
		if (chess->checkOver())
		{
			chess->init();
			continue;
		}
	}
}
