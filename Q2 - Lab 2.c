#include <stdio.h>
#include <math.h>

int calc_roots(int a, int b, int c, float* x_0, float* x_1);
int main(void){
	int num1, num2, num3, sol;
	float r1, r2, discriminant;
	printf("Enter the coefficients: ");
	scanf("%d%d%d",&num1, &num2, &num3);
	discriminant = (num2*num2) - (4*num1*num3);
	if(discriminant > 0)
	{
		r1 = (-num2 + (sqrt(discriminant))) / (2*num1);
		r2 = (-num2 - (sqrt(discriminant))) / (2*num1);
	}
	else if(discriminant == 0)
	{
		r1 = r2 = -num2 / (2*num1);
	}
	
	sol = calc_roots(num1, num2, num3, &r1, &r2);
	printf("Number of solutions: %d\n",sol);
	
	if(discriminant > 0)
	{
		printf("Solution 1: %.2f\n", r1);
		printf("Solution 2: %.2f", r2);
	}
	else
	{
		printf("Solution: %.2f", r1);
	}
	
	return 0;
}

int calc_roots(int a, int b, int c, float* x_0, float* x_1){
	int numsol;
	if(*x_0 == *x_1)
		numsol = 1;
	else
		numsol = 2;	
	
	return numsol;
	
}