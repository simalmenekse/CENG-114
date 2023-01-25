#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int f(int* arr); 
int main(void){
	
	int array[3], i, res;
	for(i=0;i<3;i++)
	{
		scanf(" %d", &array[i]);
	}
	
	res = f(array);
	printf("Return value is %d", res);
	
	
	return 0;
}

int f(int* arr){
	
	int ret_val, a=0, b=1;
	ret_val = arr[0] * arr[1] + arr[1] * arr[2] - arr[0] * arr[1] * arr[2];
	
	if(ret_val == 0)
		return b;
	else
		return a;
	
}