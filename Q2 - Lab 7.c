#include <stdio.h>
#include <string.h>

int strlen1(const char *str);
int main(void){
	
	int n;
	char string[100];
	gets(string);
	n = strlen1(string);
	printf("This string has length %d", n);
	
	return 0;
}

int strlen1(const char* str)
{
	
	char *p = str;
	while(*p++);
	
		return p-str-1;
	

	
}