#include "Chessgame.h"

ChessGame::ChessGame(player* man, AI* ai, Chess* chess)
{
	this->man = man;
	this->ai = ai;
	this->chess = chess;
	man->init(chess);  //��ʼ������
	ai->init(chess);  //��ʼ������
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
