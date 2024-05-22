#include <stdio.h>

// Write your code below
void incrementAge(int* agePointer) {
  *agePointer = *agePointer + 1;
  printf("Age variable inside incrementAge(): %d\n", *agePointer);
}

int main(void) {
  int age = 23;
  printf("Value of age before the increment: %d\n", age);
  incrementAge(&age);
  printf("Value of age after the increment: %d\n", age);
}