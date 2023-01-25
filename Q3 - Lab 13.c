#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Product {
  char *name;
  float price;
};

int main() {
	
  FILE *input_file = fopen("products.txt", "r");
  if (input_file == NULL) {
    printf("Error opening input file.\n");
    return 1;
  }

  struct Product *products = NULL;
  int num_products = 0; 

  char name[100];
  float price;
  while (fscanf(input_file, "%s %f", name, &price) == 2) {
    products = realloc(products, (num_products + 1) * sizeof(struct Product));
    if (products == NULL) {
      printf("Error allocating memory.\n");
      return 1;
    }

    products[num_products].name = strdup(name);
    products[num_products].price = price;
    num_products++;
  }

  fclose(input_file);

  char search[100];
  while (1) {
    printf("Enter a product name (or 'exit' to quit): ");
    scanf("%s", search);

    if (strcmp(search, "exit") == 0) break;

    int found = 0;
    for (int i = 0; i < num_products; i++) {
      if (strcmp(search, products[i].name) == 0) {
        found = 1;
        printf("Price of %s: $%.2f\n", search, products[i].price);
        break;
      }
    }

    if (!found) {
      printf("Product not found.\n");
    }
  }

  for (int i = 0; i < num_products; i++) {
    free(products[i].name);
  }
  
  free(products);

  return 0;
}
