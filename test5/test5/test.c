#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//交换两个数组里的内容
//int main()
//{
//	int arr1[5] = { 1, 3, 5, 7, 9 };
//	int arr2[5] = { 2, 4, 6, 8, 0 };
//	int tmp = 0;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//计算1/n的和
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//100以内的9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (9 == i % 10)
//			count++;
//		if (9 == i / 10)
//			count++;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//求n的阶乘
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//
//	scanf("%d", &n);
//	for (j = 1; j <= n; j++)
//	{
//		ret = ret*j;
//		sum += ret;
//	}
//	printf("ret=%d\n", ret);
//	printf("sum=%d\n", sum);//阶乘和
//	return 0;
//}

//int BinarySearch(int arr[], int key, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int key = 7;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	ret = BinarySearch(arr, key, sz);
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了：%d\n", ret);
//
//	/*int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (left <= right)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("找不到\n");
//	}*/
//	return 0;
//}

int main()
{
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(long double));
	return 0;
}