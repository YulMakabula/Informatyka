#include <iostream>
using namespace std;
int GetNumberFromUser() {
   int liczba;
   cout << "Podaj liczbe: ";
   cin >> liczba;
   return liczba;
}
int CalculateFactorial(int n) {
   int result = 1;
   for (int i = 1; i <= n; ++i) {
       result *= i;
   }
   return result;
}
void DisplayResult(int liczba, int silnia) {
   cout << "Silnia liczby " << liczba << " wynosi: " << silnia << endl;
}
int main() {
   int liczba = GetNumberFromUser();
   if (liczba < 0) {
       cout << "Silnia nie jest zdefiniowana dla liczb ujemnych." << endl;
   } else {
       int silnia = CalculateFactorial(liczba);
       DisplayResult(liczba, silnia);
   }
   return 0;
}