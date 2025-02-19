#include <stdio.h>
#include <string.h>

//bertsio errekurtsiboa
//Programa hau ez dago prest maiuskulak eta minuskulak desberdintzeko
int pal(char word[], int size, int i) {
  if (size >= i) {
    if (word[size-1] == word[i]) {
      return pal(word, size-1, i+1);
    } else {
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
  if (pal(word, size, 0) == 1) {
    printf("%s palindromoa da.\n", word);
  } else {
    printf("%s ez da palindromoa.\n", word);
  }
  return 0;
}
