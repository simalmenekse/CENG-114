#include <stdio.h>
#include <stdlib.h>
void maximum(int a, int b, int*max_val);
int main(void){
	int num1, num2, *resptr;
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);
	
	maximum(num1, num2, resptr);
	
}

void maximum(int a, int b, int*max_val){
	int max;
	max = a;
	
	(max < b) && (max = b);
	
	max_val = &max;
	
	printf("Maximum value: %d", *max_val);

}