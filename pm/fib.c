#include <stdio.h>
#include <stdlib.h> //strtol erabiltzeko


void fib(long amount, long i, long j) { //fibonacci funtzio kutrea
  if (amount <= 0) {
    return;
  }

  printf("%ld ", i+j);
  fib(amount-1, j, i+j);
}

//programa hemendik hasten da
int main(int argc, char *argv[]) { //args jaso
  //sarrera txarra -> laguntza
  if (argc != 2) {
    printf("Erabilera: %s <zenbakia>\n", argv[0]);
    return 1;
  }

  char *endptr;
  long amount = strtol(argv[1], &endptr, 10); //pasa argumentua amount baliora base 10
  
  fib(amount, 1, 0);
  printf("\n");
  return 0;
}
