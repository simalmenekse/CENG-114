#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int *quadrants(int *x, int *y, int n);
int main(void){
	int n;
	int *x;
	int *y;
	int *quads;
	scanf("%d", &n);
	x = (int*)malloc(n*sizeof(int));
	y = (int*)malloc(n*sizeof(int));
	
	for(int i=0;i<n;i++)
	{
		scanf("%d", &x[i]);
		scanf("%d", &y[i]);
	}
		

	quads = quadrants(x, y, n);
	for(int i=0;i<4;i++)
		printf("%d ", quads[i]);
	
	
	
	return 0;
}

int *quadrants(int *x, int *y, int n){
	
	int *q, c1=0,c2=0,c3=0,c4=0;
	q = (int*)malloc(n*sizeof(int));
	
	for(int i=0;i<n;i++)
	{
		if(x[i]>0 && y[i]>0)
		{
			c1++;
			q[0] = c1;
		}	
		else if(x[i]<0 && y[i]>0){
			c2++;
			q[1] = c2;
		}
			
		else if(x[i]<0 && y[i]<0){
			c3++;
			q[2] = c3;	
		}
			
		else{
			c4++;
			q[3] = c4;
		}
			
	}
	
	return q;

	
}