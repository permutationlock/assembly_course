#include<stdio.h>

extern long foo();

int main() {
  printf("assembly returned: %lx\n", foo());
  return 0;
}
