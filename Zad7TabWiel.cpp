#include <iostream>
using namespace std;
int main() {
   int macierz[2][3];
   int transp[3][2];
   cout << "podaj 6 liczb calkowitych do macierzy 2x3: \n";
   for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 3; j++) {
           cout << "podaj liczbe dla wiersza " << i + 1 << ", kolumny " << j + 1 << ": ";
           cin >> macierz[i][j];
       }
   }
   for (int i = 0; i < 2; i++) {
       for (int j = 0; j < 3; j++) {
           transp[j][i] = macierz[i][j];
       }
   }
   cout << "\nTransp macierz:\n";
           cout << transp[i][j] << " ";
       }
       cout << endl;
   }
} 