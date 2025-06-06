#include "player.h"

void player::init(Chess* chess)
{
	this->chess = chess;
}

void player::go()
{
	// 等待棋士有效落子
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

	// 落子
	chess->chessDown(&pos, CHESS_BLACK);
}
