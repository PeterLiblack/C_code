#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//int main()
//{
//	int i;
//	int j;
//
//	int n = 0;
//	printf("q������:>");
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int i = 0;
//for (i = 1; i <= 9; i++)
//{
//	int j = 0;
//	for (j = 1; j <= i; j++)
//	{
//
//		printf("%d*%d=%-2d ", i, j, i*j);
//	}
//	printf("\n");
//}
//
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int MID(int x, int y)
//{
//	return x - y;
//}
//int MAX(int x, int y)
//{
//	return x * y;
//}
//int MIN(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int i;
//	int j;
//
//	printf("������������:> ");
//	scanf("%d%d", &i, &j);
//
//	int sum1 = ADD(i, j);
//	int sum2 = MID(i, j);
//	int sum3 = MAX(i, j);
//	float sum4 = MIN(i, j);
//
//	printf("sum1 = %d ", sum1);
//	printf("\n");
//	printf("sum2 = %d ", sum2);
//	printf("\n");
//	printf("sum3 = %d ", sum3);
//	printf("\n");
//	printf("sum4 = %f ", sum4);
//	printf("\n");
//
//	return 0;


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	printf("������:> ");
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		printf("%d*%d=%-2d ", i, j, i*j);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//��ӡ�˷��ھ�
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��ӡ100-200����
//int main()
//{
//	int i;
//	int count=0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j >= i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n",count);
//	return 0;
//}

//��ӡ1000-2000����
//int main()
//{
//	int year;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//				count++;
//			}
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d ", count);
//	return 0;
//}

//����������
//int main()
//{
//	int sum1 = 0, sum2 = 0;
//	printf("������������Ҫ����������");
//	scanf("%d%d", &sum1, &sum2);
//	printf("sum1=%d sum2=%d \n", sum1, sum2);
//	//int set = 0;
//	//set = sum1;
//	//sum1 = sum2;
//	//sum2 = set;
//
//	sum1 = sum1^sum2;
//	sum2 = sum1^sum2;
//	sum1 = sum1^sum2;
//
//	//sum1 = sum1 + sum2;
//	//sum2 = sum1 - sum2;
//	//sum1 = sum1 - sum2;
//
//	printf("sum1=%d sum2=%d \n", sum1, sum2);
//	return 0;
//}

//��10�����������
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("�����룺");
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (max <= arr[i])
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	int i = 0, j = 0, k = 0;
//	scanf("%d%d%d", &i, &j, &k);
//	if (i < j)
//	{
//		int tmp = i;
//		i = j;
//		j = tmp;
//	}
//	if (i < k)
//	{
//		int tmp = i;
//		i = k;
//		k = tmp;
//	}
//	if (j < k)
//	{
//		int tmp = j;
//		j = k;
//		k = tmp;
//	}
//	printf("%d %d %d \n", i, j, k);
//	return 0;
//}