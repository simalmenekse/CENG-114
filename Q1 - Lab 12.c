#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
	FILE *fp;
 	fp = fopen("datasize.txt", "w");
 	if(fp == NULL){
 		printf("File error");
 		exit(0);
	 }
	 
 	fprintf(fp,"Data Type         Size\n");
 	fprintf(fp,"char              %d\n", sizeof(char));
 	fprintf(fp,"unsigned char     %d\n", sizeof(unsigned char));
 	fprintf(fp,"short int         %d\n", sizeof(short int));
 	fprintf(fp,"unsigned short int  %d\n", sizeof(unsigned short int));
 	fprintf(fp,"int               %d\n", sizeof(int));
 	fprintf(fp,"unsigned int      %d\n", sizeof(unsigned int));
 	fprintf(fp,"unsigned long int %d\n", sizeof(unsigned long int));
 	fprintf(fp,"float             %d\n", sizeof(float));
 	fprintf(fp,"double            %d\n", sizeof(double));
 	fprintf(fp,"long double       %d\n", sizeof(long double));

 	fclose(fp);
	
	return 0;
}