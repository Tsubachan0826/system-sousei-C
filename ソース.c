#include <stdio.h>
int main(void)
{
	int a, b, result;
	
	printf("数字を入力してください。: ");
	scanf_s("%d", &a);
	printf("もう一つの数字を入力してください。: ");
	scanf_s("%d", &b);

	result = a * b;

	printf("%d", result);
	return 0;
}