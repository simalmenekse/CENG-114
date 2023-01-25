#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
	
	int a, i, j, sum1=0, sum2=0, total;
	printf("Enter the sizes of the 2d array:  ");
	scanf("%d", &a);	
	int array[a][a];
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			scanf("%d", &array[i][j]);
		}
	}
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			if(i==j)
				sum1 += array[i][j];
				
			if((i+j) == a-1)
				sum2 += array[i][j];
		}	
		
	}
	
	total = sum1 + sum2;
	printf("%d", total);
	
	
	return 0;
}