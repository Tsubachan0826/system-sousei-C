#include <stdio.h>

int main(void)
{
	int a, result;

	//1つの整数を入力
	printf("数字を入力してください。: ");
	scanf_s("%d", &a);

	if (a % 2 == 1)
	{
		printf("奇数");
	}
	else
	{
		printf("偶数");
	}

	return 0;

	




}