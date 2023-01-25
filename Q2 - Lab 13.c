#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_LENGTH 512

int main() {

  FILE *fp = fopen("data.txt", "r");
  if (fp == NULL) {
    printf("Error!");
    return 1;
  }

  char str[MAX_LENGTH];
  fgets(str, MAX_LENGTH, fp);

  fclose(input_file);

  int frequency[26] = {0};  

  for (int i = 0; str[i] != '\0'; i++) {
    char ch = tolower(str[i]);


    if (isalpha(ch)) {
      frequency[ch - 'a']++;
    }
  }

  FILE *output_file = fopen("frequency.txt", "w");
  if (output_file == NULL) {
    printf("Error opening output file.\n");
    return 1;
  }

  for (int i = 0; i < 26; i++) {
    if (frequency[i] == 0) continue;

    fprintf(output_file, "%c: %d\n", i + 'a', frequency[i]);
  }

  fclose(output_file);

  return 0;
}
