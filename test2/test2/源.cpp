#define _CRT_SECURE_NO_WARNINGS 1





  #include <stdio.h>
#include <math.h>


//void print_arr(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}

int main()
{


	////数组
	//int arr[10] = { 0 };
	////int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//int i = 0;
	//print_arr(arr, 10);
	//for (i = 0; i < 10; i++)
	//{
	//	scanf("%d", &arr[i]);
	//}
	//print_arr(arr, 10);

	////闰年
	//int year = 0;
	//int count = 0;
	//for (year = 1000; year <= 2000 ; year++)
	//{
	//	if (year % 4 == 0)
	//	{
	//		if (year % 100 != 0)
	//		{
	//			count++;
	//			printf("%d ", year);
	//		}
	//	}
	//	 if (year % 400 == 0)
	//	{
	//		 count++;
	//		printf("%d ", year);
	//	}
	//}
	//printf("\ncount=%d\n", count);


	////乘法表
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{

			printf("%d*%d=%-2d ", i, j, i*j);
		}
		printf("\n");
	}
	
	////100-200素数
	//int i=0;
	//int count=0;
	//for (i = 100; i <= 200; i++)
	//{
	//	int j = 0;
	//	for (j = 2; j < i / 2; j++)
	//	{
	//		if (i%j == 0)
	//			break;
	//	}
	//	if (j >= i / 2)
	//	{
	//		count++;
	//		printf("%d ", i);
	//	}
	//		
	//}
	//printf("\ncount=%d\n", count);
	return 0;
}