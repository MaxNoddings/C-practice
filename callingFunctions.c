#include <stdio.h>

// Global variable to hold what your favorite animal is
const char *YOUR_ANIMAL_NAME = "Lion";

// Write your code below
void printMyFavoriteAnimal(void) {
  printf("My favorite animal is a %s\n", YOUR_ANIMAL_NAME);
}

int main(void) {
  printMyFavoriteAnimal();
}