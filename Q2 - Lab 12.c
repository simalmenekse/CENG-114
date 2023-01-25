#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
	FILE *fp;
	int num;
	int sum=0;
 	fp = fopen("datasize.txt", "r");
 	if(fp == NULL){
 		printf("File error");
 		exit(0);
	 }
	 
	 while(!feof(fp)){
	 	fscanf(fp, "%d",&num);
	 	sum = sum + num;
	 }
	
	printf("Sum is : %d", sum);
	
	fclose(fp);

	return 0;
}