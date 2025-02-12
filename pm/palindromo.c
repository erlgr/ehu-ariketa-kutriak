#include <stdio.h>
#include <string.h>

//Programa hau ez dago prest maiuskulak eta minuskulak desberdintzeko
int pal(char word[], int size) {
  for (int i = 0;i <= size; i++) {
    size -= 1;
    if (word[i] != word[size]) {
      return 0;
    }
  }
  return 1;
}

int main(int argc, char *argv[]) { //args jaso
  //sarrera txarra -> laguntza
  if (argc != 2) {
    printf("Erabilera: %s <hitza>\n", argv[0]);
    return 1;
  }
  char *word = argv[1];
  int size = strlen(word);
  if (pal(word, size) == 1) {
    printf("%s palindromoa da.\n", word);
  } else {
    printf("%s ez da palindromoa.\n", word);
  }
  return 0;
}
