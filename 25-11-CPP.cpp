#include <iostream>
using namespace std;
int main() {
   // Zad 1
   int liczba1;
   int liczba2;
   char znak;
   cout << "Podaj pierwsza liczbe: ";
   cin >> liczba1;
   cout << "Podaj druga liczbe: ";
   cin >> liczba2;
   cout << "Podaj znak dzialania (+, -, *, /): ";
   cin >> znak;
   switch (znak) {
       case '+':
           cout << "Wynik: " << liczba1 + liczba2 << endl;
           break;
       case '-':
           cout << "Wynik: " << liczba1 - liczba2 << endl;
           break;
       case '*':
           cout << "Wynik: " << liczba1 * liczba2 << endl;
           break;
       case '/':
           if (liczba2 != 0)
               cout << "Wynik: " << liczba1 / liczba2 << endl;
           else
               cout << "Blad!" << endl;
           break;
            default:
           cout << "Blad" << endl;
   }
   
   // Zad 2
   int t;
   char jd;
   cout << "Podaj t w stopniach celsjusza: ";
   cin >> t;
   cout <<"Wybierz jednostke docelowa (K Kelvin, F Fahrenheit): ";
   cin >> jd;
   switch (jd) {
   	case 'K':
   	case 'k':
   		cout << "T w stopniach Kelvina: " << (t + 273.15) << endl;
   		break;
   	case 'F':
   	case 'f':
   		cout << "T w stopniach Fahrenheita: " << ((t * 9/5) + 32) << endl;
   		break;
   	default:
   		cout << "Blad" << endl;		
   }
   
   // Zad 3
   int g;
   char pojazd;
   cout << "Podaj liczbe godzin parkowania: ";
   cin >> g;
   cout << "Podaj rodzaj pojazdu(S samochod, M motocekl, A autobus): ";
   cin >> pojazd;
   cout << "Oplata za parkowanie: ";
      switch (pojazd) {
   	case 'S':
   	case 's':
   		cout << (g * 5) << "zl" << endl;
   		break;
   	case 'M':
   	case 'm':
   		cout << (g * 3) << "zl"<< endl;
   		break;
   	case 'A':
   	case 'a':
   		cout << (g * 10) << "zl" << endl;
   		break;
   	default:
   		cout << "Blad" << endl;		
   }
   
  
}