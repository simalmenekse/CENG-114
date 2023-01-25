#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int *alloc_read(int n);
int main(void){
	int n, i;
	int *arr;
	scanf("%d", &n);
	
	arr = alloc_read(n);
	
	for(i=0;i<n;i++)
		printf("%d ", arr[i]);	

	return 0;
}

int *alloc_read(int n){
	
	int *ptr, j;
	ptr =(int*)malloc(n * sizeof(int));
	for(j=0;j<n;j++)
	{
		scanf("%d", &ptr[j]);
	}
	
	
	return ptr;
}