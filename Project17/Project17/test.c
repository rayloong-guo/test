#define  _CRT_SECURE_NO_WARNINGS  1
#include"game.h"

void menu()
{
	printf("***********************\n");
	printf("****1.play***0.exit****\n");
	printf("***********************\n");
}

void game()
{
	int ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board,ROW,COL);
	while (1)
	{
		Playermove(board,ROW,COL);  //玩家下棋
		DisplayBoard(board, ROW, COL);
		ret = Is_win(board, ROW, COL);//判断输赢
		if (ret != 'c')
		{
			break;
		}
		Computermove(board, ROW, COL);//电脑下棋
		DisplayBoard(board, ROW, COL);
		ret = Is_win(board, ROW, COL);//判断输赢
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
		printf("玩家赢\n");
	else if (ret == '#')
		printf("电脑赢\n");
	else
		printf("平局\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择<:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("开始游戏");
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入错误");
		}	
	} while (input);
	return 0;
}