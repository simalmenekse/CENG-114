#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100


int countNumbers(const char *str);
int main(void){
	
	char string[MAX], a;
	gets(string);
	a = countNumbers(string);
	printf("Number of integers in this sentence is %d\n", a);
	
	return 0;
}
int countNumbers(const char *str)
{
	int i,k,co=0,num=0;
	for(i=0; i<str[i] != 0; i++)
	{
		co = 0;
		while(isdigit(str[i]))
		{
			i++;
			co++;
		}
		if(co != 0)
		{
			num++;
		}
		
	}
	
	return num;
	
}