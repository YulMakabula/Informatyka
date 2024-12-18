#include <iostream>
using namespace std;
int main() {
 //Zad4
 int N=1;
 int M=1;
 int liczba=1;
 cout <<"Podaj liczby wierszy: ";
 cin >> N;
 cout << "Podaj liczby kolumn: ";
 cin >> M;
 for (int i=0; i<N ; i++){
       for (int j=0; j<M ; j++){
           cout << liczba << "\t" ;
           liczba +=2;
       }
       cout << endl;
   }
   return 0;
}