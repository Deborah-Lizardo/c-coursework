#include <stdio.h>

int main(){

  int temperature = 20;
  temperature = -10;

  unsigned int age = 30;
  age = 40;

  printf("Temperature and age: %d %d\n", temperature, age);
  printf("Size of data type int in bytes: %zu\n", sizeof(int));

  printf("Temperature adress: %p\n", &temperature);
  printf("Age adress: %p\n", &age);

  return 0;

  }