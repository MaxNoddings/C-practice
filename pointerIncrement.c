#include<stdio.h>

int main() {
  double x = 5;
  double* ptr1;
  ptr1 = &x;

  printf("\n%p\n", ptr1);

  // Code for Checkpoint 1 goes here:
  ptr1 += 1;
  printf("%p\n", ptr1);

  // Code for Checkpoint 2 goes here:
  ptr1 -= 4; 
  printf("%p\n\n", ptr1); 
}