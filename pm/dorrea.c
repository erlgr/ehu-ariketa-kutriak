#include <stdio.h>
#include <stdlib.h>

void dorreaMarraztu(int n) {
  if (n == 1) {
    printf("1\n");
  } else {
    dorreaMarraztu(n-1);
    for (int i = 0; i < n; i++) {
      printf("%d", n);
    }
    printf("\n");
  }
}

int main(int argc, char *argv[]) {
  //sarrera txarra -> laguntza
  if (argc != 2) {
    printf("Erabilera: %s <zenbakia>\n", argv[0]);
    return 1;
  }
  char *endptr;
  long n =  strtol(argv[1], &endptr, 10);
  if (n > 0) {
    dorreaMarraztu(n);
  } else {
    printf("Sartu 0 baino handiagoa den zenbaki bat\n")
  }
  return 0;
}
