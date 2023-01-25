#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a[5], i;
	for(i=0;i<5;i++)
	{
		scanf("%d", &a[i]);
	}
	int j=-1;
	for(i=0; i<5; i++)
	{
		if(a[i] < 1)
		{
			j++;
			int temp = a[j];
            a[j] = a[i];
            a[i] = temp;
		}
	}
	
	for(i=0; i<5; i++)
	{
		printf("%d", a[i]);
	}
	
	return 0;
}
