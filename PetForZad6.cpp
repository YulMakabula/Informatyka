#include <iostream>
using namespace std;
int main() {
 //Zad6
   int N;
   int M;
   cout << "Podaj szerokosc: ";
   cin >> N;
   cout << "Podaj wysokosc: ";
   cin >> M;
   for (int i = 0; i < M; i++) {
       for (int j = 0; j < N; j++) {
           if (i == 0 || i == M - 1 || j == 0 || j ==N - 1)
               cout << "*";
           else
               cout << " ";
       }
       cout << endl;
   }
   return 0;
}