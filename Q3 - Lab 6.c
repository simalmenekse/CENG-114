#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void){
	char str[100];
	char a;
	int i=0, chr=0;
	
	scanf(" %s", str);
	scanf(" %c", &a);
	
	while(str[i] != '\0')
	{
		if (str[i] == a)
        {
            chr++;
        }
		
		i++;	
	}
	
	printf("%d", chr);
	
	return 0;
}