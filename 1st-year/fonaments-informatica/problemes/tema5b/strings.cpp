#include "strings.h"
#include <iostream>
#include <string.h>

using namespace std;

int LongCadena(char c[]) {
  int length = 0;

  length = strlen(c);

  return length;
}

void ConcatenarCadena(char c1[], char c2[], char c3[]) {
  int i = 0, j = 0;

  while (c1[i] != '\0') {
    c3[i] = c1[i];

    i++;
  }

  while (c2[j] != '\0') {
    c3[i] = c2[j];

    i++;
    j++;
  }

  c3[i] = '\0';
}

int TrobarCaracter(char cad[], char c) {
  int i = 0;
  bool find = false;

  while (cad[i] != '\0' && !find) {
    if (cad[i] == c) {
      find = true;
    } else {
      i++;
    }
  }

  if (find) {
    return 1;
  } else {
    return 0;
  }
}

void Majuscules(char c[]) {
  int i = 0;

  while (c[i] != '\0') {
    if (c[i] >= 97 && c[i] <= 122) {
      c[i] -= 32;
    }

    i++;
  }
}

int Palindrom(char c[]) {
  int i = 0, j, lenght, mitad, res;
  bool find = false;

  lenght = strlen(c);
  j = lenght - 1;
  mitad = 2 / j;

  while (i < lenght && !find) {
    if (c[i] != c[j]) {
      find = true;
    } else {
      i++;
      j--;
    }
  }

  if (find) {
    return 0;
  } else {
    return 1;
  }
}

char PrimerDiferent(char c1[], char c2[]) {
  int i = 0;
  bool find = false;

  while (c1[i] != '\0' && !false) {
    if (c1[i] != c2[i]) {
      find = true;

      return c1[i];
    } else {
      i++;
    }
  }

  if (find) {

  } else {
    return '\0';
  }
}
