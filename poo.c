#include <stdio.h>
#include <stdlib.h>

int n = 0;
int max = 0;
int count = 0;
char buffer[10] = {0};

int factorial(int n) {
  if (n == 1) return 1;
  return n * factorial(n-1);
}

void combiantion(int index, char number) {
  if (index == n) {
    for (int k = 0; k < n; k++) {
      printf("%c", buffer[k]);
    }
    if (++count < max) {
      printf(", ");
    }
    return;
  }

  for (; number <= '9' - n + index + 1; number++) {
    buffer[index] = number;
    combiantion(index+1, number+1);
  }
}

int main(int argc __attribute__((unused)), char* argv[]) {
  n = atoi(argv[1]);
  max = factorial(10) / (factorial(10 - n) * factorial(n));

  combiantion(0, '0');
  printf("\n");

  return 0;
}
