#include <stdio.h>
int main(int argc, char const *rgv[])
{
	int a;
	printf("请输入一个整数\n");

	scanf("%d", &a);

	if (a % 3 == 0)
	{

		puts("能被三整除");
	}
	else if (a % 3 == 1)

	{	puts("余1");

	}
	else if (a % 3 == 2)
	{puts ("余2");}
	return 0;

}