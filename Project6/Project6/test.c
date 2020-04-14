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
	printf("**********    1. ��    **********\n");
	printf("**********    2. �е�    **********\n");
	printf("**********    3. ����    **********\n");
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			menu2();
			printf("��ѡ��:>");
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
				printf("ѡ�����������ѡ��!\n");
				break;
			}
		case 0:
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	} while (input);
	return 0;
}