#include <stdio.h>
int main(void)
{
	int a, b, result;
	
	printf("”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B: ");
	scanf_s("%d", &a);
	printf("‚à‚¤ˆê‚Â‚Ì”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B: ");
	scanf_s("%d", &b);

	result = a * b;

	printf("%d", result);
	return 0;
}