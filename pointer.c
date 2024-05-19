#include<stdio.h>

int main() {
  // Checkpoint 1 code goes here.
  double dblVar;
  // Checkpoint 2 code goes here.
  double* dblPtr = &dblVar; // The & symbol means that it is an address, therefore in this case $dblVar isn't the dblVar variable, but rather the address of the dblVar variable which is where you want the pointer to point to
  // Checkpoint 3 code goes here.
  printf("\n");
  printf("%p", dblPtr);
  printf("\n\n");
}