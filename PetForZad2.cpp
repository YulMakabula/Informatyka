#include <iostream>
using namespace std;
int main() {
 //Zad2
int N;
cout << "podaj liczbe calkowita N: ";
cin >> N;
cout << "Kwadraty liczb od 1 do " << N << ": "<< endl;
for (int i=1 ; i <=N; i++) {
   cout << i << "^2 = " << i * i << endl;
}
cout << endl;
return 0;
}