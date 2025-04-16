#include <iostream>
#include <ctime>
#include <cstdlib>
//Zad5
using namespace std;
void porownajLiczby(int proba, int cel) {
   if (proba < cel) {
       cout << "Za malo" << endl;
   } else if (proba > cel) {
       cout << "Za duzo" << endl;
   } else {
       cout << "Gratulacje! Odgadles liczbe" << endl;
   }
}
int main() {
   srand(time(NULL));
   int wylosowana = (rand() % 100) + 1;
   int liczba;
   do {
       cout << "Podaj liczbe: ";
       cin >> liczba;
       porownajLiczby(liczba, wylosowana);
   } while (liczba != wylosowana);
   return 0;
}