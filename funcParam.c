#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Modify the code below
int getRandomNumber(int maxNumber) {
  int randomNumber = rand() % maxNumber + 1;
  return randomNumber;
}

int main(void) {
  srand(time(NULL));

  // Variable to store the user input
  int userInput;
  
  // Ask the user for an integer
  printf("\nEnter the maximum number for the random number generator: ");
  scanf("%d", &userInput);

  // Modify the code below
  int randomNumber = getRandomNumber(userInput);
  printf("\nMy random number is: %d\n\n", randomNumber);
}