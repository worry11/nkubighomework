#pragma once
#include"player.h"
#include"AI.h"
#include"Chess.h"
class ChessGame
{
public:
	ChessGame(player* man, AI* ai, Chess* chess);
	void play();//开始对局
private:
	player* man;
	AI* ai;
	Chess* chess;
};

