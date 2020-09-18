// Author: Khalil Stroman kzs5955@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
int digit_sum(int n){
  if(n>0){
  return n%10 + digit_sum(n/10);
  }
  else{
    return 0;
  }
}


int main(void) {
  char *digits = readline("Enter an int: ");
  int num = atoi(digits);
  printf("sum of digits of %s is %i.\n",digits, digit_sum(num));
  return 0;
}