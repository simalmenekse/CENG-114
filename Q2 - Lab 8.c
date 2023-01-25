#include <stdio.h>

int main(void){
	int n, i, j, c1=0, c2=0, c3=0;
	scanf("%d", &n);
	int array[n][n];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &array[i][j]);
		}
	}
	
	for(i=1;i<n;i++)
	{
		if((array[i-1][0] == array[i][0]))
			c1++;
		
		if((array[0][i-1] == array[0][i]))
			c2++;
		
		if((array[n-1][i-1] == array[n-1][i]))
			c3++;

	}
	
	if(c1==2 && c2==2 && c3==2)
		printf("This has a visual c pattern. ");
	else
		printf("This one does not have a visual c pattern. ");
	
	
	return 0;
}