#define _CRT_SECURE_5NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i+=2)
//	{
//		//if (i % 2 == 1)
//		printf("%d ", i);
//	}
//	return 0;
//}

int main()
{
	int day = 0;
	printf("请输入数字：");
	scanf_s("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期一\n"); break;
	case 2:
		printf("星期二\n"); break;
	case 3:
		printf("星期三\n"); break;
	case 4:
		printf("星期四\n"); break;
	case 5:
		printf("星期五\n"); break;
	case 6:
		printf("星期六\n"); break;
	case 7:
		printf("星期日\n"); break;
	default:
		printf("输入有误\n"); break;
	}
	return 0;
}

//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//猜数字
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("**********************************\n");
//	printf("***********   1.play   ***********\n");
//	printf("***********   0.exit   ***********\n");
//	printf("**********************************\n");
//}
//
//void game()
//{
//	int random_num = rand() % 100 + 1;
//	int input = 0;
//	while (1)
//	{
//		printf("请输入猜的数字>:");
//		scanf_s("%d", &input);
//		if (input > random_num)
//		{
//			printf("猜大了\n");
//		}
//		else if (input < random_num)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("选择错误，请重新输入！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//关机
//#include <stdio.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
//	scanf_s("%s", input);
//	if (0 == strcmp(input, "我是猪"))
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}