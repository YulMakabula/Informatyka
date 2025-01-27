#include <iostream>
using namespace std;
int main() {
	//Zad3
   int tablica[10];
   int suma = 0;
   cout << "Podaj 10 liczb calkowitych:\n";
   for (int i = 0; i < 10; i++) {
       cout << "Podaj liczbe nr " << i + 1 << ": ";
       cin >> tablica[i];
   }
   cout << "Liczby parzyste: ";
   for (int i = 0; i < 10; i++) {
       if (tablica[i] % 2 == 0) {
           cout << tablica[i] << ", ";
           suma += tablica[i];
       }
   }
   cout << "\nSuma liczb parzystych: " << suma << endl;
   return 0;
}