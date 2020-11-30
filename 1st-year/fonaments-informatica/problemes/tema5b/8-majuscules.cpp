#include "strings.cpp"
#include "strings.h"
#include <iostream>

using namespace std;

#define LONG 50

int main() {
  char cad[LONG];

  cin >> cad;

  Majuscules(cad);

  cout << cad;
}
