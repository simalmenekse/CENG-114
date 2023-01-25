#include <stdio.h>
#define SIZE 10

int get_odd(int *arr, int n, int* first_odd, int*second_odd, int* idx_first, int* idx_second);
int main(void){
	
	int i, res;
	int fo, so, fod, sod;
	int array[SIZE];
	for(i=0; i<SIZE; i++)
	{
		scanf("%d", &array[i]);
	}
	
	res = get_odd(array, SIZE, &fo, &so, &fod, &sod);
	
		if(res == 0)
			printf("There are no odd numbers. ");
		else
		{
			printf("The first odd integer is: %d\nIts location is %d\n", fo, fod);
			printf("The second odd integer is: %d\nIts location is %d", so, sod);	
		}
			
	
	return 0;
}

int get_odd(int *arr, int n, int* first_odd, int*second_odd, int* idx_first, int* idx_second){
	
	int j, k, counter = 0;
	for(j=0; j<n; j++)
	{
		if(arr[j] % 2 != 0)
		{
			counter++;
			if(counter == 1)
			{
				*first_odd = arr[j];
				*idx_first = j;
			}
			else if(counter == 2)
			{
				*second_odd = arr[j];
				*idx_second = j;
				break;
			}
		}
	}
	
	if(counter == 0)
		return 0;
	
}