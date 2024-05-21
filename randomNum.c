#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  // Write your code below
  int randomNumber = rand() % 20 + 1;
  printf("Random number between 1 and 20 = %i\n", randomNumber);
}