#include <stdio.h>
#define ops 4

float sum(float num1, float num2) {return (num1 + num2);}
float sub(float num1, float num2) {return (num1 - num2);}
float Mul(float num1, float num2) {return (num1 * num2);}
float div(float num1, float num2) {return (num1 / num2);}

int main(void) {
	float(*ptr_func[ops]) (float, float) = {sum, sub, Mul, div};
	int choice;
	float num1, num2;

	printf("Ennter your choice: 0 for 1, 1 for sub, 2 for Mul, 3 for div\n");
	scanf("%i", &choice);

	printf("Enter two numbers: \n");
	scanf("%f %f", &num1,& num2);

	printf("The Result is: %f\n", ptr_func[choice] (num1, num2));
	return (0);
}
