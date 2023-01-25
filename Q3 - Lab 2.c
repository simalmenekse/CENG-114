#include <stdio.h>
#include <stdlib.h>

int odd_count(int a, int b, int* first, int*second);
int main(void){
	int x, y, *fptr, *sptr, oc;
	printf("Enter the interval: ");
	scanf("%d%d", &x, &y);
	if(x%2 != 0)
	{
		fptr = &x;
	}
	else
	{
		x +=1;
		fptr = & x;
	}
	
	oc = odd_count(x, y, &fptr, &sptr);
	printf("First odd number: %d\n", *fptr);
	printf("Second odd number: %d\n", (*fptr) + 2);
	
	printf("Odd count: %d", oc);
	
	return 0;
}

int odd_count(int a, int b, int* first, int*second){
	int oddnum = 0;
	while(a<b)
	{
		if(a%2 != 0)
		{
			oddnum++;
		}
		a++;	
	}
		return oddnum;	
}
	
	
