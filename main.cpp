#include<iostream>
#include"Chessgame.h"
int main(void)
{
	player man;
	Chess chess(15,24,26,53.4);
	AI ai;
	ChessGame game(&man, &ai, &chess);
	game.play();
	return 0;
}