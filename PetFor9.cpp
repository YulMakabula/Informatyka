#include <iostream>
using namespace std;
int main() {
   int licznik = 0; 
   for (int setki = 1; setki <= 9; setki++) {
       for (int dziesiatki = 0; dziesiatki <= 9; dziesiatki++) {
           if (dziesiatki != setki) {
               for (int jednosci = 0; jednosci <= 9; jednosci++) {
                   if (jednosci != setki && jednosci != dziesiatki) {
                       cout << setki << dziesiatki << jednosci << "\t"; 
                       licznik++;
                       if (licznik % 10 == 0) {
                           cout << endl;
                       }
                   }
               }
           }
       }
   }
   cout << "\nLiczba liczb bez powtarzajacych sie cyfr: " << licznik << endl;
}