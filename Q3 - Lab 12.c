#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
	FILE *fp;
	int num, i, k;
	printf("Enter a number: ");
	scanf("%d", &num);
 	fp = fopen("multiplication.txt", "w");
 	if(fp == NULL){
 		printf("File error");
 		exit(0);
	 }
	 
	 
	for(i=1;i<=num;i++)
	{
		fprintf(fp, " %d ", i);
	}
	fprintf(fp,"\n");
	
	for(i=1;i<=num;i++)
	{
		
		fprintf(fp," %d ",i);
		for(k=1;k<=num;k++)
		{
			
			fprintf(fp," %d ",i*k);
		}
		fprintf(fp,"\n");
}
	
	fclose(fp);
	
	
	return 0;
}