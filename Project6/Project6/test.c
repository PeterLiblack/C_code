#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu1()
{
	printf("***********************************\n");
	printf("**********    1. play    **********\n");
	printf("**********    0. exit    **********\n");
	printf("***********************************\n");
}

void menu2()
{
	printf("***********************************\n");
	printf("**********    1. 简单    **********\n");
	printf("**********    2. 中等    **********\n");
	printf("**********    3. 困难    **********\n");
	printf("***********************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	int output = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu1();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			menu2();
			printf("请选择:>");
			scanf("%d", &output);
			switch (output)
			{
			case 1:
				game();
				break;
			case 2:
				game();
				break;
			case 3:
				game();
				break;
			default:
				printf("选择错误，请重新选择!\n");
				break;
			}
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}
	} while (input);
	return 0;
}