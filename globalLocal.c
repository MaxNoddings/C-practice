#include <stdio.h>

// Write your code below...

char* myMessage = "This is my global message!";

void myFunc() {
  char* myMessage = "This is my local message!";
  printf("%s\n", myMessage);
}

int main() {
  // You can change `myNumber` to be larger than `50`
  int myNumber = 555;

  if (myNumber <= 50) {
    printf("%d\n%s\n", myNumber, myMessage);
  } else { 
    int myNumber = 500;
    printf("%d\n", myNumber);
    myFunc();
  }
}