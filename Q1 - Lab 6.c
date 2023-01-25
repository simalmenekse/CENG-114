#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void isVowel(char ch[100], int);
int main(void){
	
	char word[100];
	scanf(" %s", word);
	int length = strlen(word);
	isVowel(word, length);
	
	
	return 0;
}

void isVowel(char ch[100], int len){
	
	int i, a=0, count=0; 
	char array[100];
	for(i=0; i<len;i++)
	{
		if (ch[i] == 'a' || ch[i]  == 'e' || ch[i]  == 'i' || ch[i]  == 'o' || ch[i]  =='u' || ch[i]  =='A' || ch[i]  =='E' || ch[i]  =='I' || ch[i]  =='O' || ch[i]  =='U')	
			printf("%c", ch[i]);
		else
		{
			array[a] = ch[i];
			count++;
			a++;
		}	
	}
	
	for(i=0; i<count; i++)
	{
		printf("%c", array[i]);
	}
		
}