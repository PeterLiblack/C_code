
#include<stdio.h>

#include <string.h>


void print_table(int n)
{
	int i = 0;
	for(i=1; i<=n; i++)
	{
		int j = 0;
		for(j=1; j<=i; j++)
		{
			printf("%d*%d=%d ",i, j, i*j);
		}
		printf("\n");
	}
}


int main()
{
	int line = 0;
	scanf("%d",&line);
	print_table(line);





//	int num = 10;
//	scanf("%d", &num);
//	printf("%d\n",num);
	/*printf("c:\\code\\test.c\\n");*/
	//printf("\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a");
	///*printf("%d\n", sizeof(char));
	//printf("%d\n", sizeof(short));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(long));
	//printf("%d\n", sizeof(long long));
	//printf("%d\n", sizeof(float));
	//printf("%d\n", sizeof(double));*/
	//printf("%d\n", strlen("abcdef"));
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	printf("%c\n", '\328');

	return 0;
}
