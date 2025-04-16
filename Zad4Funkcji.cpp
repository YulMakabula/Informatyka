#include <iostream>
using namespace std;
//Zad4
void GetArrayFromUser(int tablica[], int rozmiar) {
   for (int i = 0; i < rozmiar; i++) {
       cout << "Podaj liczbe nr " << i + 1 << ": ";
       cin >> tablica[i];
   }
}
int FindMaxValue(int tablica[], int rozmiar) {
   int max = tablica[0];
   for (int i = 1; i < rozmiar; i++) {
       if (tablica[i] > max) {
           max = tablica[i];
       }
   }
   return max;
}
void DisplayResult(int max) {
   cout << "Najwieksza liczba: " << max << endl;
}
int main() {
   int ilosc= 5;
   int liczby[ilosc];
   GetArrayFromUser(liczby, ilosc);
   int max = FindMaxValue(liczby, ilosc);
   DisplayResult(max);
   
   return 0;
}