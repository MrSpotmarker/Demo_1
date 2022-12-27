#include <stdio.h>

int multiply(int num1, int num2);

int main(int argc, char **argv)
{

  char str[20];

  printf("Enter your name: ");

  fgets(str, sizeof(str), stdin);

  str[0] = 'X';

  printf("%s", str);

}

int multiply(int num1, int num2) {
  return num1 * num2;
}