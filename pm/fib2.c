#include <stdio.h>
#include <stdlib.h> //strtol erabiltzeko


long fib(long amount) { //fibonacci iteratibo kutrea
  long i = 0;
  long j = 1;
  long aux = 0;
  for (long k = 0;k < amount-1;k++) {
    aux = i;
    i = j;
    j = i+aux;
  }
  return j;
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
  
  if (amount == 0) {
    printf("0\n");
  } else {
    printf("%ld\n", fib(amount));
  }
  return 0;
}
