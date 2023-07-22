#include <stdio.h>

void addNumbers(int num1, int num2)
{
	int result = num1 + num2;
	printf("Result is: %d\n", result);
}
int main(void)
{
	addNumbers(10, 9);
	return (0);
}
