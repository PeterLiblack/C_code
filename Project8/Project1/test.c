#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//int main()
//{
//
//	//printf("\a\a\a\a\a\a\a\a\a\a\a");
//	/*printf("%s\n", "c:\test\32\test.c");
//	printf("%s\n", "c:\\test\\32\\test.c");
//	printf("%s\n", "c:\\test\89\\test.c");
//	printf("%d\n", strlen("c:\test\32\test.c"));*/
//	//printf("%d\n", strlen("c:\test\121"));
//
//	/*int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(sz));
//	printf("%d\n", sz);
//*/
//
//	return 0;
//}
//
//int MAX(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("��������������>");
//	scanf("%d%d", &a, &b);
//	max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = { 'b', 'i', 't' };
//	char arr3[] = { 'b', 'i', 't', '\0' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}
//
//int main()
//{
//	printf("%d\n", sizeof(char *));
//	printf("%d\n", sizeof(short *));
//	printf("%d\n", sizeof(int *));
//	printf("%d\n", sizeof(double *));
//	return 0;
//}
//
//
//int main()
//{
//	int num = 0;
////	int a = 2;
//	printf("��������Ҫ�жϵ�����\n");
//	scanf("%d", &num);
//	if (num % 2 == 1)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��ż��\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		printf("%d ", i);
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	//for (i = 1; i <= 100; i++)
//	//{
//	//	if (i % 2 != 0)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//	while (1)
//	{
//		if (i <= 10)
//		{
//			printf("%d ", i);
//			i++;
//		}
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//
//	return 0;
//}
//
//int main(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1:b = 30;
//	case 2:b = 20;
//	case 3:b = 10;
//	default:b = 0;
//	}
//	printf("%d ", b);
//	return b;
//}
//
//
//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:switch (y)
//	{
//	case 0:printf("first");
//	case 1:printf("second");
//		break;
//	default:printf("hello");
//	}
//	case 2:printf("third");
//	}
//	return 0;
//}


//���������Ӵ�С
//1~100��ӡ3�ı���
//�����������Լ��
//1000~2000��֮�������
//100~200֮�������


//�Ƚ���������С
//
//int main()
//{
//	int a, b, c = 0;
//	printf("������������: ");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int m = a;
//		a = b;
//		b = m;
//	}
//	if (a < c)
//	{
//		int m = a;
//		a = c;
//		c = m;
//	}
//	if (b < c)
//	{
//		int m = b;
//		b = c;
//		c = m;
//	}
//	printf("%d > %d > %d \n", a, b, c);
//	return 0;
//}
//
//int main()
//{
//	int a, b, c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		a = b;
//		if (a < c)
//		{
//			a = c;
//			if (b < c)
//			{
//				b = c;
//			}
//			else
//			{
//				b = b;
//			}
//		}
//		else
//		{
//			a = a;
//		}
//
//	}
//	printf("%d > %d > %d \n", a, b, c);
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("��������������");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		if (a > c)
//		{
//			if (b > c)
//			{
//				b = b;
//			}
//			else
//			{
//				b = c;
//			}
//		}
//		else
//		{
//			a = c;
//		}
//	}
//	else
//	{
//		a = b;
//	}
//	printf("%d > %d > %d \n", a, b, c);
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("��������������");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		if (a > c)
//		{
//			if (b > c)
//			{
//				printf("%d > %d > %d \n", a, b, c);
//			}
//			else
//			{
//				printf("%d > %d > %d \n", a, c, b);
//			}
//		}
//		else//a>b a<c
//		{
//			printf("%d > %d > %d \n", c, a, b);
//		}
//	}
//	else//a<b
//	{
//		if (a > c)
//		{
//			printf("%d > %d > %d \n", b, a, c);
//		}
//		else//a<c
//		{
//			if (b > c)
//			{
//				printf("%d > %d > %d \n", b, c, a);
//			}
//			else
//			{
//				printf("%d > %d > %d \n", c, b, a);
//			}
//		}
//	}
//
//	return 0;
//}


//1~100��ӡ���ı���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//�����������Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("��������������");
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{
//		int z = 0;
//		z = a;
//		a = b;
//		b = z;	
//	}
//	for (c = b; c <= a; c--)
//	{
//		if (b%c == 0 && a%c == 0)
//		{
//			printf("���Լ���� %d \n", c);
//			break;
//		}
//	}
//	return 0;
//}


//1000~2000��֮�������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d \n", count);
//	return 0;
//}
//
//
//100~200֮�������
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (a = 2; a < i; a++)
//		{
//			if (i%a == 0)
//			{
//				break;
//			}
//		}
//		if (i == a)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d \n", count);
//	return 0;
//}
//
//
//int main()
//{
//	int a, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d \n", a);
//	return 0;
//}


//��д1-100�к�������9�ĸ���
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//9 19 29 39 ....89 90 91...99
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n",count);
//	return 0;
//}


//��ӡ1/1-1/2+1/3-1/4+...+1/99-1/100���
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("sum = %lf\n", sum);
//	return 0;
//}


//��10���������ֵ
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int Max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	Max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (Max < arr[i])
//		{
//			Max = arr[i];
//		}
//	}
//	printf("�����Max = %d\n", Max);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}


//���9*9�˷��ھ���
//int main()
//{
//	int i, j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			int z = i*j;
//			printf("%d * %d = %2d  ", i, j, z);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//1. ���� n�Ľ׳ˡ�
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)//3628800+362880+40320+5040+720+120+24+6+2+1
//	{
//		ret *= i;
//	}
//	printf("ret = %d\n", ret);
//	return 0;
//}


//2. ���� 1!+ 2!+ 3!+ ���� + 10!
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int ret = 1;
//	for (i = 1; i <= 10; i++)//4037913
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("sum = %d \n", sum);
//	return 0;
//}


//3. ��һ�����������в��Ҿ����ĳ������n�� ��дint binsearch(int x, int v[], int n); ���ܣ���v[0] <= v[1] <= v[2] <=
//   ��. <= v[n - 1]�������в���x.
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int k = 17;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��� �±�Ϊ:%d\n", i);
//		}
//	}
//	if (i >= 10)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] <= k)
//		{
//			left = mid + 1;
//		}
//		if (arr[mid] >= k)
//		{
//			right = mid - 1;
//		}
//		if (arr[mid] == k)
//		{
//			printf("�ҵ��ˣ��±�Ϊ:%d\n",mid);
//		}
//	}
//	printf("�Ҳ���\n");
//	return 0;
//}


//4. ��д���룬��ʾ����ַ��������ƶ������м��ۡ�
//#include <Windows.h>
//
//int main()
//{
//	char arr1[] = "hello world!!!";
//	char arr2[] = "**************";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		Sleep(1000);
//		system("cls");
//		printf("%s\n", arr2);
//	}
//	
//	return 0;
//}


//5. ��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��¼
//   �ɣ�������ξ�����������˳�����
//int main()
//{
//	int i = 0;
//	char pass[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", pass);
//		if (0 == strcmp(pass, "123456"))
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("���δ����˳�����\n");
//	}
//	return 0;
//}


//��������Ϸ
//void menu()
//{
//	printf("*******************************\n");
//	printf("******** 1. play **************\n");
//	printf("******** 0. exit **************\n");
//	printf("*******************************\n");
//}
//
//void game()
//{
//	int random_num = rand() % 100 + 1;
//	int input = 0;
//	while (1)
//	{
//		printf("���������֣�");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("�´���\n");
//		}
//		else if (input < random_num)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//
//	}
//
//	//printf("����Ϸ\n");
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ��\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//1. дһ�����������ж�һ�����ǲ���������
//int sushu(int x)
//{
//	int i = 0;
//	int a = 0;
//	for (i = 2; i < x; i++)
//	{
//		if (x%i == 0)
//		{
//			a = 0;
//			break;
//		}
//	}
//	if (i>=x)
//	{
//		a = 1;
//	}
//	return a;
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		printf("������һ������");
//		scanf("%d", &input);
//		int a = sushu(input);
//		if (a == 1)
//		{
//			printf("������\n");
//		}
//		if (a == 0)
//		{
//			printf("��������\n");
//		}
//	} while (1);
//
//	return 0;
//}

//2. дһ�������ж�һ���ǲ������ꡣ
//int year(int x)
//{
//	int a = 0;
//	if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
//	{
//		a = 1;
//	}
//	return a;
//}
//
//int main()
//{
//	int input = 0;
//	printf("��������ݣ�");
//	scanf("%d", &input);
//	int a = year(input);
//	if (a == 1)
//	{
//		printf("������\n");
//	}
//	if (a == 0)
//	{
//		printf("��������\n");
//	}
//	return 0;
//}

//3. дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
//void erfen(int *arr,int x, int y, int k)
//{
//	int mid = 0;
//	while (x <= y)
//	{
//	    mid = (x + y) / 2;
//		if (arr[mid] > k)
//		{
//			y--;
//		}
//		else if (arr[mid] < k)
//		{
//			x++;
//		}
//		else 
//		{
//			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//			break;
//		}
//	}
//	if (x>y)
//	{
//		printf("�Ҳ���\n");
//	}
//}
//
//int dic(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		if (arr[mid] == k)
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int input = 0;
//	printf("��������Ҫ���ҵ�����");
//	scanf("%d", &input);
//	int ret = dic(arr, input, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ %d\n", ret);
//	}
//	return 0;
//}

//4. дһ��������ÿ����һ������������ͻὫnum��ֵ����1��



//дһ���������ж�һ�����ǲ�������

//int prime(int i)
//{
//	for (int a = 2; a < i; a++)
//	{
//		if (i%a == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int ret = prime(i);
//		if (ret == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n",count);
//	return 0;
//}

//ʵ�ֺ����ж��ǲ�������
//int leap(int i)
//{
//	return ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0));
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		int ret = leap(year);
//		//printf("ret=%d ", ret);
//		if (ret == 1)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//ʵ��һ��������������������������
//void exc(int *pa, int *pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a, b = 0;
//	printf("��������Ҫ����������");
//	scanf("%d%d", &a, &b);
//	printf("����ǰ a = %d b = %d\n", a, b);
//
//	exc(&a, &b);
//
//	printf("������ a = %d b = %d\n", a, b);
//	return 0;
//}

//�Զ���˷��ھ���
//void mul(int n)
//{
//	int i, j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d  ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	mul(n);
//	return 0;
//}


//1���ݹ��ӡһ������ÿһλ
//void Print(int a)
//{
//	if (a > 9)
//	{
//		Print(a / 10);
//	
//	}
//	printf("%d ", a % 10);
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	Print(a);
//
//	return 0;
//}
//2���ݹ�ͷǵݹ�ֱ���׳�
//int factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n* factorial(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = factorial(n);
//	printf("%d \n", ret);
//	return 0;
//}
//3���ݹ�ͷǵݹ�ֱ�ʵ��strlen
//int Strlen(const char*str) 
//{
//	if (*str == '\0')
//		return 0;
//	else return 1 + Strlen(str + 1);
//}
//int main()
//{
//	char *p = "abcdef";
//	int len = Strlen(p);
//	printf("%d\n", len);
//	return 0;
//}
//4���ݹ�ʵ���ַ���������reverse_string(char *string)
//void reverse(char* arr)
//{
//	int l = 0;
//	int r = strlen(arr) - 1;
//	while (l < r)
//	{
//		char tmp = arr[l];
//		arr[l] = arr[r];
//		arr[r] = tmp;
//		l++;
//		r--;
//
//	}
//}
//
//void reverse(char*str)
//{
//	char tmp = str[0];
//	int len = strlen(str);
//	str[0] = str[len - 1];
//	str[len - 1] = '\0';
//	if (strlen(str + 1) >= 2)
//		reverse(str + 1);
//	str[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "hello world";
//	reverse(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}
//5���ݹ����һ������ÿλ֮��
//int DigitSum (int a)
//{
//	if (a > 9)
//	{
//		return DigitSum(a / 10) + a % 10;
//	
//	}
//	else
//	{
//		return a;
//	}
//}
//
//int main()
//{
//	unsigned int a = 0;
//	scanf("%u", &a);
//	int ret = DigitSum(a);
//	printf("%d \n", ret);
//
//	return 0;
//}
//6���ݹ�ʵ��n��k�η�
//#include <math.h>
//int main()
//{
//	int n, k = 0;
//	scanf("%d%d", &n, &k);
//	double d = pow(n, k);
//	printf("d = %lf\n", d);
//}
//7���ݹ�ͷǵݹ�ֱ����n��쳲�������
//int fib(int n) 
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int d = fib(n);
//	printf("d = %d\n", d);
//}


//1��ð������
//int main()
//{
//
//}
//2������һ�����飬init������ʼ��0��print������ӡ���飻reverse�����������
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//		
//	}
//}
//int main()
//{
//	int arr[10] = { 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr, sz);
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}
//3�������������������
//int main()
//{
//	int arr1[] = { 1, 3, 5, 7, 9 };
//	int arr2[] = { 2, 4, 6, 8, 0 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	Print(arr1, sz);
//	Print(arr2, sz);
//}

//��������ҵ
//1,���������������в�ͬλ�ĸ���1999 2299 7
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int tmp = m^n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp&(tmp - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//2����ӡ���������Ƶ�����λ��ż��λ
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}

//3��ͳ�ƶ�������1�ĸ��� 15 4��1
//int NumberOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int NumberOf1(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//int NumberOf1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = NumberOf1(n);
//	printf("%d\n", ret);
//	return 0;
//}

//4�����������������������±�����

//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	int a = num1 & num2;
//	int b = num1 | num2;
//	int c = num1 ^ num2;
//	printf("%d %d %d \n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int i = 5, j = 5, p, q;
//	p = (i++) + (i++) + (i++);
//	q = (++j) + (++j) + (++j);
//	printf("%d\n", p);//15
//	printf("%d\n", q);//24
//	printf("%d\n", i);//8
//	printf("%d\n", j);//8
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//ָ��ϰ��
//1��ʹ��ָ���ӡ��������
//2���ַ�������
//void reverse(char* str)
//{
//	int len = strlen(str);
//	char *left = str;
//	char *right = str + len - 1;
//	char tmp = 0;
//
//	while (left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//
//	printf("%s\n", arr);
//	return 0;
//}

//3��������� 2+22+222+2222+22222
//int main()
//{
//	int a, n = 0;
//	scanf("%d%d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//4����ӡˮ�ɻ�
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		while (tmp)
//		{
//
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//5����ӡ����
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//	return 0;
//}