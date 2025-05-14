#pragma once
#include"Chess.h"
class player
{
private:
	Chess* chess;
public:
	void init(Chess* chess);
	void go();
};

