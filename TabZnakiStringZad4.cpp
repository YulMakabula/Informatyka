#include <iostream>
#include <cstring>
using namespace std;
int main() {
	//Zad4
   char text[100], odwrocony[100];  
   cout << "Podaj ciag znakow: ";
   cin.getline(text, 100);
   int dlugosc = strlen(text);  
   for (int i = 0; i < dlugosc; i++) {
       odwrocony[i] = text[dlugosc - i - 1];
   }
   odwrocony[dlugosc] = '\0';
   cout << "Odwrocony ciag: " << odwrocony << endl;
   return 0;
}