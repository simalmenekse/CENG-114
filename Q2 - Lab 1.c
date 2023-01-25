#include <stdio.h>
int primeornot(int num);
int main(void){
	printf("Enter a number: ");
	int n1, a;
	scanf("%d", &n1);
	a = primeornot(n1);
	if (a==1)
		printf("This is a prime number.");
	else
		printf("This is not a prime number. ");
	
	return 0;
}

int primeornot(int num){
	int i;
	for(i=2; i<num/2; i++)
	{
		if(num%i==0)
			return 0;
		else
			return 1;
	}
	
}