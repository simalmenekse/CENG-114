#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int *reorder(int *arr, int n);
int main(void){
	int *nums;
	int n, i;
	int *nums_ord;
	scanf("%d", &n);
	
	nums = (int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
		scanf("%d",&nums[i]);
		
	nums_ord = reorder(nums, n);
	
	for(i=0;i<n;i++)
		printf("%d ", nums_ord[i]);
	
	free(nums);

	return 0;
}

int *reorder(int *arr, int n){
	
	int count = 0;
	for(int i=0;i<n;i++)
	{
		if(arr[i] == 1)
			count++;
	}
	
	for (int i = 0; i < count; i++)
        arr[i] = 1;
		
	for (int i = count; i < n; i++)
        arr[i] =0;
        
    return arr;
	
}