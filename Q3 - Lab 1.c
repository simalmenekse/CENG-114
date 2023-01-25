#include <stdio.h>
void pyramid(int row);
int main(void){
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	pyramid(num);
		
	return 0;
}

void pyramid(int row){
	int i, j, n1=1;
	for(i=1; i<=row; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",n1);
			n1++;
		}
		
		printf("\n");
		
	}
	
	
	
}