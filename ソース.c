#include <stdio.h>
int main(void)
{
	int a, b, result;
	
	printf("��������͂��Ă��������B: ");
	scanf("%d", &a);
	printf("������̐�������͂��Ă��������B: ");
	scanf("%d", &b);

	result = a * b;

	printf("%d", result);
	return 0;
}