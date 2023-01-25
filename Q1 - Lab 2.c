#include <stdio.h>

void incd(int *x);
int main(void){
	int num;
	printf("Enter a number: "),
	scanf("%d", &num);
	
	incd(&num);
	
	return 0;
}

void incd(int *x){
	int sum=0;
	sum += *x + 2;
	printf("Your number double incremented: %d", sum);
	
}