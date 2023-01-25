#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("data.txt", "r");
    FILE *of = fopen("output.txt", "w");

    char line[256];
    while (fgets(line, sizeof(line), fp)) {
        char *first = strtok(line, ", ");
        char *last = strtok(NULL, ", ");

        fprintf(of, "%c. %c.\n", first[0], last[0]);
    }

    fclose(fp);
    fclose(of);

    return 0;
}
