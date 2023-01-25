#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int majority_character(const char* str);
int main(void)
{
	char str1[1000];
	gets(str1);
	char mc;
	mc = majority_character(str1);
	printf("%c", mc);
	
	
	return 0;
}

int majority_character(const char* str)
{
	int lenght, half;
	int max = 0, i, counter=0;
	int count[100] = {0};
	char res;

	lenght = strlen(str);
	half = lenght/2;

	for(i=0;i<lenght;i++)
	{
		count[str[i]]++;
		if(max < count[str[i]])
		{
			max = count[str[i]];
			res = str[i];
		}
	}
	
	for(i=0; str[i] !='\0'; i++)
	{
		if(str[i] == res)
			counter++;
	}

	if(counter>half)
		return res;
	else
		return -1;
		
}
	
	
