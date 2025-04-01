#include <iostream>
using namespace std;
int main() {
	//Zad3
   int suma = 0;
   string text;
   cout << "Podaj ciag znakow: ";
   getline(cin, text);
   char literka;
   cout << "Podaj znak do zliczenia: ";
   cin >> literka;
   int tablica[20];  
   int index = 0;  
   for (int i = 0; i < text.length(); i++) {
       if (text[i] == literka) {
           suma += 1;
           tablica[index] = i;  
           index++;
       }
   }
   cout << "Liczba wystapien znaku '" << literka << "': " << suma << endl;
   cout << "Pozycje wystapien: ";
   for (int i = 0; i < index; i++) {
       cout << tablica[i];
       if (i < index + 1) {
           cout << ", ";
       }
   }
   cout << endl;
   return 0;
}