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
	CHESS_WHITE=-1,//����
	CHESS_BLACK=1
}chess_kind_t;
class Chess
{
public:
	Chess(int gradeSize, int marginX, int marginY, float chessSize);
	void init();
	bool clickBoard(int x, int y, ChessPos* pos);
	void chessDown(ChessPos* pos, chess_kind_t kind);
	int getGradeSize();//��ȡ���̴�С
	int getChessData(ChessPos* pos);
	int getChessData(int row, int col);
	bool checkOver();//�������Ƿ����
private:
	IMAGE chessBlackImg;//��������
	IMAGE chessWhiteImg;//��������
	int gradeSize;//���̵Ĵ�С
	int margin_x;//���̵����߽�
	int margin_y;//���̵Ķ����߽�
	float chessSize;//���ӵĴ�С������С����Ĵ�С��
	//�洢��ǰ��ֵ����ӷֲ�����
	vector<vector<int>>chessMap;
	//��ʾ���ڸ�˭����
	bool playerFlag;//true���ú����� false���ð�����
	void updateGameMap(ChessPos* pos);
	bool checkWin();
	ChessPos lastPos; //�������λ��, Chess��private���ݳ�Ա
};

