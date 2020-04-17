#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//交换两个数
/*int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	printf("num1=%d num2=%d\n", num1, num2);

// 	int tmp = 0;
//	tmp = num1;
//	num1 = num2;
//	num2 = tmp;

//只使用两个变量 异或^
	num1 = num1^num2;
	num2 = num1^num2;
	num1 = num1^num2;

	printf("num1=%d num2=%d\n", num1, num2);
//	getchar();
//	getchar();
	return 0;
}*/


////选出十个数中的最大数
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i]>max)
//			max = arr[i];
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

/* //排序
int main()
{
	int a = 2;
	int b = 1;
	int c = 3;

	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}

	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}

	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d\n", a, b, c);

	return 0;
}*/

/* //求最大公因数
int main()
{
	int a = 24;
	int b = 18;
	int c = 0;
	//辗转相除
	while (c=a%b)
	{
		a = b;
		b = c;
	}
	printf("%d\n", b);
	return 0;
}*/



int main()
{
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(char*));

	return 0;
}