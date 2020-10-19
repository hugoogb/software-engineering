#include <iostream>

using namespace std;

int fibonacci(int n){
 int n1, n2;
  
  
}

int main(){
  int n;

  cout << "Quin terme de la serie Fibonacci vols calcular? "; cin >> n;

  while (n < 0) {
    cout << "Error: El nombre no pot ser negatiu" << endl;

    cout << "Quin terme de la serie Fibonacci vols calcular? "; cin >> n;
  }



  return 0;
}
