#include <stdio.h>
#include <stdlib.h>

long ber(long n, long m, long o) {
  if (m == 1) {
    return n;
  } else if (m == 0) {
    return 1;
  }
  return ber(n*o, m-1, o);
}

int main(int argc, char *argv[]) {
  //sarrera txarra -> laguntza
  if (argc != 3) {
    printf("Erabilera: %s <zenbakia> <berretzailea>\n", argv[0]);
    return 1;
  }
  char *endptr;
  long n =  strtol(argv[1], &endptr, 10);
  long m =  strtol(argv[2], &endptr, 10);
  if (m >= 0) {
    printf("%d\n", ber(n, m, n));
  } else {
    printf("Sartu 0 edo handiagoa den zenbaki bat\n");
  }
  return 0;
}
