#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
int main(void){
	int num1, num2;
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	swap(&num1, &num2);
	
	printf("Numbers swapped: %d %d",num1, num2);
	
	return 0;
}

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}