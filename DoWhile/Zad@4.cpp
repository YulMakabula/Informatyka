#include <iostream>
using namespace std;
int main() {
   short N, cont = 1, parzyste = 0;
   cout << "Podaj liczbe calkowita dodatnia N: ";
   cin >> N; 
   while (cont <= N) { 
       if (cont % 2 == 0) {
           parzyste++; 
       }
       cont++; 
   }
   cout << "Liczba liczb parzystych od 1 do " << N << " to: " << parzyste << endl;
   return 0;
}