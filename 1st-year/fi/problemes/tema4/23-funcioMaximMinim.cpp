#include <iostream>

using namespace std;

int maximMinim(int num, int &min, int &max){
  int resNum = 0, count = 0;

  if (count == 0 && num == 0) {
    resNum = 1;
  } else {

    min = num;
    max = num;

    do {
      cout << "Introdueix un nombre enter: ";
      cin >> num;
        
      if (num < min && num != 0){
              min = num;
      }
      else if (num > max && num != 0){
		  max = num;
      }
      count ++;
    }while (count < 10 && num != 0);
  }

  return resNum;
}

int main()
{
    int num = 0, min = 0, max = 0, resNum = 0; 

    cout << "Introdueix un nombre enter: ";
    cin >> num;

    resNum = maximMinim(num, min, max);
    
    if (resNum == 1)
    {
        cout << "Error: sequencia buida";
    }
    else
    {
        cout << "El minim de la sequencia es " << min << " i el maxim es " << max;
    }
    cout << endl;

    return 0;
}
