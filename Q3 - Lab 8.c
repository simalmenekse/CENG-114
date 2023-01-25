#include <stdio.h>
#define MAX 10

int main(void){
	int n, i, j, c;
	scanf("%d", &n);
	int array[n][n];
	int arr1[n/2][n/2];
	int arr2[n/2][n/2];
	
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
			printf("%d", array[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<n/2;i++)
	{
		for(j=0;j<n;j++)
		{
			arr1[i][j] = array[i][j];
		}
	}
	
	for(i=n;i>n/2;i--)
	{
		for(j=0;j<n;j++)
		{
			arr2[i][j] = array[i][j];
		}
	}
	
	
	
	
	for(i=0;i<n/2;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr1[i][j] == arr2[i][j])
				c = 1;
			else 
				c = 0;
		}
	}
	
	if(c==1)
		printf("Hey");
	else
		printf("Yay");

	
	return 0;
}