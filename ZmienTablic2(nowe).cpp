#include <iostream>
using namespace std;
int main() {
	//Zad2Nowe
   int tablica[5];
   
   cout << "Podaj 5 liczb calkowitych: \n";
   for (int i = 0; i < 5; i++) {
       cin >> tablica[i];
   }
  
   for (int i = 0; i < 5; i++) {
       if (tablica[i] < 0) {
           tablica[i] = 0;
       }
   }
   
   cout << "\nLiczby ujemne zamienione na 0: ";
   for (int i = 0; i < 5; i++) {
       cout << tablica[i] << " ";
   }
}
		
		
	
	