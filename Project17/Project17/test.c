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
		Playermove(board,ROW,COL);  //�������
		DisplayBoard(board, ROW, COL);
		ret = Is_win(board, ROW, COL);//�ж���Ӯ
		if (ret != 'c')
		{
			break;
		}
		Computermove(board, ROW, COL);//��������
		DisplayBoard(board, ROW, COL);
		ret = Is_win(board, ROW, COL);//�ж���Ӯ
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
		printf("���Ӯ\n");
	else if (ret == '#')
		printf("����Ӯ\n");
	else
		printf("ƽ��\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��<:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("��ʼ��Ϸ");
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�������");
		}	
	} while (input);
	return 0;
}