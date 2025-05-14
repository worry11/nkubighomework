#include "player.h"

void player::init(Chess* chess)
{
	this->chess = chess;
}

void player::go()
{
	// �ȴ���ʿ��Ч����
	MOUSEMSG msg;
	ChessPos pos;
	while (1)
	{
		msg = GetMouseMsg();
		if (msg.uMsg == WM_LBUTTONDOWN && chess->clickBoard(msg.x, msg.y, &pos)) 
		{
			break;
		}
	}

	// ����
	chess->chessDown(&pos, CHESS_BLACK);
}
