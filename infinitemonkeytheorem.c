#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

long phrasePos[100000], numOfPhrases=0;

int checkChar(long lengthOfPhrase, char tab0[], char phrase[lengthOfPhrase+1], long pos, long stage) {
  if(lengthOfPhrase>stage) { // sprawdzenie czy juz nie porownalismy wszystkich znakow z frazy
    if(tab0[pos+stage]==phrase[stage]) checkChar(lengthOfPhrase,tab0,phrase,pos,stage+1); // jezeli znaki z pozycji stage sa takie same to wykonujemy te funkcje ponownie z stage+1
  } else { // jezeli wszystkie znaki zostaly porownane
    printf("%ld\n", pos);
    phrasePos[numOfPhrases]=pos; // zapis pozycji frazy w ciagu
    numOfPhrases++;
  }
  return 0;
}


int main() {
  long numOfChar,i,lengthOfPhrase, curPos, numOfCharToShow, checkVar=0;
  time_t t;
  srand((unsigned) time(&t));
  printf("Podaj liczbe znakow do wygenerowania(w 1000): ");
  scanf("%ld", &numOfChar);
  numOfChar*=1000;
  getchar();
  char *tab0 = (char*) malloc((numOfChar+1)*sizeof(char));
  if(tab0 == NULL) { // sprawdzenie czy malloc utworzyl miejsce na te zmienna
    printf("Memory allocation failed");
    return 1;
  }
  char tab1[32]={"QDRWBJFUPASHTGYNEOIZXMCVKL ,.?!\0"}; //workman layout
  tab0[numOfChar]='\0';
  printf("Wpisz dlugosc wyszukiwanej frazy: ");
  scanf("%ld", &lengthOfPhrase); getchar();
  char phrase[lengthOfPhrase+1];
  printf("Wpisz wyszukiwana fraze: ");
  fgets(phrase, lengthOfPhrase+1, stdin);
  phrase[lengthOfPhrase]='\0';
  getchar();
  printf("Pozycje fraz:\n");
  for(i=0;i<numOfChar;i++) {
    tab0[i]=tab1[rand()%31]; // generacja randomowych znakow z tablicy tab1
    if(i>lengthOfPhrase&&numOfChar-i>lengthOfPhrase+1) { // sprawdzenie czy sprawdzajac liczby nie wyjdziemy poza tablice
      checkChar(lengthOfPhrase,tab0,phrase,i-lengthOfPhrase,0); // funkcja porownojaca
    }
    checkVar++;
  }
  printf("\nSprawdzono %ld znakow\n", checkVar);
  if(numOfPhrases==0) printf("Nie znaleziono zadnej frazy\n");
  while(!0) {
    printf("Wyszukiwanie poszczegolnych pozycji (aby opuscic program wpisz liczbe ujemna)\nPodaj pozycje startowa: ");
    scanf("%ld", &curPos); getchar();
    if (curPos<0) return 0;
    printf("Ile znakow po pozycji startowej ma byc pokazanych: ");
    scanf("%ld", &numOfCharToShow); getchar();
    for(i=curPos;i<(curPos+numOfCharToShow);i++) {
      printf("%c", tab0[i]);
    }
    printf("\n");
  }
  free(tab0);
  return 0;
}
