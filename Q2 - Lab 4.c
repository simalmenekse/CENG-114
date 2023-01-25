#include <stdio.h>

int is_roof(int* arr, int n, int amax, int adress);
void findMax(int *arr1, int n1);

int main(void){
	int size, max;
	printf("Input the numbers you want to store in the array: ");
	scanf("%d", &size);
	int array[size];
	int i;
	for(i=0; i<size; i++)
	{
		scanf("%d", &array[i]);
	}
	
	findMax(array, size);
	
	return 0;
}

void findMax(int *arr1, int n1){
	int j, maximum, mad, res;
	maximum = arr1[0];
	for(j=0;j<n1; j++ )
	{
		if(arr1[j]>maximum)
			maximum = arr1[j];
			mad = j;
	}
	
	res = is_roof(arr1, n1, maximum, mad);
	if(res == 1)
		printf("This is roof sequence");
	else
		printf("This is not roof sequence");
	
}

int is_roof(int* arr, int n, int amax, int adress){
	int k, res1;
	for(k=0; k<adress; k++)
	{
		if(arr[k] < arr[k+1])
			res1 = 1;
		else 
			res1 = 0;
	}
	
	for(k=n-1; k>=adress; k--)
	{
		if(arr[k] < arr[k-1])
			res1 = 1;
		else 
			res1 = 0;
	}
	
	return res1;
}