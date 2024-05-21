#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main() {
  float number = 4.5;
  char letter = 'a';
  char sentence[] = "gladiator is epic";
  printf("%f\n", ceil(number)); // 5.000000
  printf("%f\n", log(number)); // 1.504077
  printf("%d\n", isupper(letter)); // 0

  int length = strlen(sentence);
    
  // Convert each character to uppercase
  for (int i = 0; i < length; i++) {
      sentence[i] = toupper(sentence[i]);
  }
  
  printf("%s\n", sentence);
  letter = toupper(letter);
  printf("%d\n", isupper(letter)); // 1
}