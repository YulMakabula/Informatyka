#include <iostream>
using namespace std;
int GetNumberFromUser() {
   int n;
   cout << "Podaj liczbe elementow: ";
   cin >> n;
   return n;
}
int CalculateFibonacciRecursive(int n) {
   if (n <= 1)
       return 1;
   else
       return CalculateFibonacciRecursive(n - 1) + CalculateFibonacciRecursive(n - 2);
}
void DisplayFibonacciSequence(int n) {
   cout << "Ciag Fibonacciego: ";
   for (int i = 0; i < n; i++) {
       cout << CalculateFibonacciRecursive(i);
       if (i < n - 1) cout << ", ";
   }
   cout << endl;
}
int main() {
   int liczbaElementow = GetNumberFromUser();
   DisplayFibonacciSequence(liczbaElementow);
   return 0;
}