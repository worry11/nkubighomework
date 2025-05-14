#pragma once
#include"graphics.h"
#include"vector"
using namespace std;
struct ChessPos
{
	int row;
	int col;
	ChessPos(int r = 0, int c = 0) :row(r), col(c) 
	{
	}
};
typedef enum
{
	CHESS_WHITE=-1,//白棋
	CHESS_BLACK=1
}chess_kind_t;
class Chess
{
public:
	Chess(int gradeSize, int marginX, int marginY, float chessSize);
	void init();
	bool clickBoard(int x, int y, ChessPos* pos);
	void chessDown(ChessPos* pos, chess_kind_t kind);
	int getGradeSize();//获取棋盘大小
	int getChessData(ChessPos* pos);
	int getChessData(int row, int col);
	bool checkOver();//检查棋局是否结束
private:
	IMAGE chessBlackImg;//黑棋棋子
	IMAGE chessWhiteImg;//白棋棋子
	int gradeSize;//棋盘的大小
	int margin_x;//棋盘的左侧边界
	int margin_y;//棋盘的顶部边界
	float chessSize;//棋子的大小（棋盘小方格的大小）
	//存储当前棋局的棋子分布数据
	vector<vector<int>>chessMap;
	//表示现在该谁下棋
	bool playerFlag;//true：该黑子走 false：该白子走
	void updateGameMap(ChessPos* pos);
	bool checkWin();
	ChessPos lastPos; //最近落子位置, Chess的private数据成员
};

