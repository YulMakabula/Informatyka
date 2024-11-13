#include <iostream>
using namespace std;
int main() {
//1
int a;
cout << "Podaj wynik egzaminu: ";
cin >> a;
if ((a >= 0) && (a <= 49)) 
cout << "Ocena Niedostateczna";
else if ((a >= 50) && (a <= 69)) 
cout << "Ocena Dostarteczna";
else if ((a >= 70) && (a <= 84)) 
cout << "Ocena Dobra";
else if ((a >= 85) && (a <= 99)) 
cout << "Ocena Bardzo dobra";
else if ((a >= 100) && (a <= 100)) 
cout << "Ocena Celująca";


   return 0;
}