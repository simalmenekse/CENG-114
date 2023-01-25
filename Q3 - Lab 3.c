#include <stdio.h>
#include <stdlib.h>
void calc(int a, int b, char op, int* c);
int main(void){
	int num1, num2;
	char operand;
	unsigned int *ptr;
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);
	printf("Enter operation: ");
	scanf(" %c", &operand);
	calc(num1, num2, operand, ptr);
	return 0;
}
void calc(int a, int b, char op, int* c){
	int res;
	switch(op)
	{
		case '+':
			res = a + b;
			break;
		case '-':
			res = a - b;
			break;
		case '*':
			res = a * b;
			break;
		case '/':
			res = a / b;
			break;
	}
	
	c = &res;
	printf("Result: %d ", *c );
}