#include <stdio.h>

void pyramid(int num);
int main(void){
	int row;
	printf("Enter a number: ");
	scanf("%d", &row);
	pyramid(row);
	
	return 0;
}

void pyramid(int num){
	int i, j, k;
	for(i=1; i<=num; i++)
	{
		for(j=i; j<num; j++)
		{
			printf(" ");
		}
		
		for(k=1; k<=i; k++)
		{
			printf("*");
		} 
	
		printf("\n");
	}
}