#include <string.h>
#include <stdlib.h>
#include <stdio.h>
struct Person{
	
	int age;
	char name[50];
	char gender[50];
};

int main(void){
	
	struct Person p;
	p.age = 18;
	strcpy(p.name, "Simal");
	strcpy(p.gender, "Female");
	
	printf("Age: %d\nName: %s\nGender: %s", p.age, p.name, p.gender);
	
	return 0;
}