#include <stdio.h>
int main(void)
{
	int a, b, result;
	
	printf("数字を入力してください。: ");
	scanf("%d", &a);
	printf("もう一つの数字を入力してください。: ");
	scanf("%d", &b);

	result = a * b;

	printf("%d", result);
	return 0;
}