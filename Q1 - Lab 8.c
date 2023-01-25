#include <stdio.h>
#define MAX 10

int main(void){
	
	int n, i, j, counter=0;
	scanf("%d", &n);
	int array[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &array[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				if(array[i][j] %2 != 0)
					counter++;
			}
		}
		
	}
	
	printf("There are %d odd numbers on the main diagonal.", counter);
	return 0;
}