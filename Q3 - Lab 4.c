#include <stdio.h>
#define SIZE 3
int f(int* arr); 
int main(void){
	
	int i, res;
	int array[SIZE];
	for(i=0; i<SIZE; i++)
	{
		scanf("%d", &array[i]);
	}
	res = f(array);
	printf("The return value is %d", res);
	
	return 0;
}


int f(int* arr){
	
	if(arr[0] == 1)
	{
		if(arr[1] == 1)
			return 1;
	}
	else if(arr[1] == 1)
	{
		if(arr[2] == 1)
		return 1;
	}
	else
		return 0;
	
}