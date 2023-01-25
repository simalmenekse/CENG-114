#include <stdio.h>
#include <stdlib.h>
void partTheNumbers(int arr[], int n);
void swap(int *a, int *b);
int main(void){
	
	int array[6] = {5, 21, 22, 30, 26, 25}, i;
	int arr_size = sizeof(array)/sizeof(array[0]);
	partTheNumbers(array, arr_size);
	
	for(i=0; i<arr_size; i++)
	{
			printf("%d ", array[i]);
	}
	
	return 0;
}

void partTheNumbers(int arr[], int n){
	int left=0, right=n-1;
	while(left < right )
	{
		while (arr[left] % 2 != 0 && left < right)
            left++;
            
        while (arr[right] % 2 == 0 && left < right)
            right--;
            
        if(left < right)
        {
        	swap(&arr[left], &arr[right]);
            left++;
            right--;
		}
	}
	
	
}

void swap(int *a, int *b){	
	int temp = *a;
    *a = *b;
    *b = temp;
}