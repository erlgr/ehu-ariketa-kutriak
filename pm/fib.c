#include <stdio.h>
#include <stdlib.h> //strtol erabiltzeko


long fib(long amount, long i, long j) { //fibonacci errekurtsibo kutrea
  if (amount == 1) {
    return i+j;
  }

  return fib(amount-1, j, i+j);
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
  
  if (amount == 0) { //0 kasua zaindu (behin)
    printf("0\n");
  } else if (amount < 0) { //minus kasua zaindu segfaultak ez egoteko
    printf("ezin da zenbaki honen fibonacci kalkulatu\n");
  } else {
    printf("%ld\n", fib(amount, 1, 0));
  }
  return 0;
}
