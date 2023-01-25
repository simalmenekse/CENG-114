#include <stdio.h>
#include <stdlib.h>
void print_hex(int n);
int main(void){
	
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	print_hex(num);
	
	return 0;
}

void print_hex(int n){
	
	printf("%X\n", n);
	unsigned char * ptr;
	ptr =(unsigned char*) &n + sizeof(n) - 1;
	int i, flag;
	for(i = sizeof(n) - 1; i >= 0; i--) {
		
		flag = *ptr;
		if(flag != 0)
		{
			printf("%p", *ptr);
			ptr --;	
			
		}
		
	
		
	}
	
	
}