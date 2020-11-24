#define  _CRT_SECURE_NO_WARNINGS  1
#define ROW  3
#define COL  3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void InitBoard(char board[ROW][COL], int row ,int col);
void DisplayBoard(char board[ROW][COL], int row ,int col);
void Playermove(char board[ROW][COL], int row, int col);
void Computermove(char board[ROW][COL], int row, int col);
//告诉四种状态 /玩家赢/电脑赢/平局/继续
char Is_win(char board[ROW][COL], int row, int col);