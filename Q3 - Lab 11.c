#include <string.h>
#include <stdlib.h>
#include <stdio.h>

struct Student {
  char *name;
  int id;
  float grades[3];
};

struct Student students[10];

void display_student_info(struct Student *students);
float average_test_score(struct Student *students);
char get_letter_grade(struct Student *students);

int main() {
 	
 	int i;
 	float avg;
 	char g;
 	for(i=0;i<10;i++)
 	{
 		scanf("%s", (students+i)->name);
 		scanf("%d", (students+i)->id);
 		for(i=0;i<3;i++)
 			scanf("%lf",(students+i)->grades);
	}
	
	avg = average_grades(struct Student students);
	g = get_letter_grade(struct Student students);
	
  	return 0;
}
void display_name_id(struct Student students) {
  printf("Name: %s\n", students.name);
  printf("ID: %d\n", students.id);
}

float average_grades(struct Student students) {
  float sum = 0.0;
  for (int i = 0; i < 3; i++) {
    sum += students.grades[i];
  }
  return sum / 3.0;
}

char get_letter_grade(struct Student students) {
  float avg = average_grades(struct Student students);
  if (avg >= 90) {
    return 'A';
  } else if (avg >= 80) {
    return 'B';
  } else if (avg >= 70) {
    return 'C';
  } else if (avg >= 60) {
    return 'D';
  } else {
    return 'F';
  }
}

