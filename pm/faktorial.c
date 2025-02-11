#include <stdio.h>
#include <stdlib.h>

int fak(int n) {
  if (n == 0) {
    return 1;
  }
  return n * fak(n-1);
}

int main(int argc, char *argv[]) {
  //sarrera txarra -> laguntza
  if (argc != 2) {
    printf("Erabilera: %s <zenbakia>\n", argv[0]);
    return 1;
  }
  char *endptr;
  printf("%d\n", fak(strtol(argv[1], &endptr, 10)));
  return 0;
}
