#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int distance(char *str);
int main(void){
	
	char string[100];
	int n;
	gets(string);
	n = distance(string);
	printf("%d", n);
	
	
	return 0;
}

int distance(char *str){
	
	int i=0, left, right=0, d;
	while(str[i] != '0')
		i++;
	
	
	left = i;
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == '0')
		{
			right = i;
		}
		
		i++;
	}
	
	d =right - left ;
	
	return d;
	
	
	
	
}