#include <iostream>
using namespace std;
//Zad 2
float suma(float a, float b) {
    return a + b;
}
float roznica(float a, float b) {
    return a - b;
}
float iloczyn(float a, float b) {
    return a * b;
}
float iloraz(float a, float b) {
    if (b != 0) 
        return a / b;
    else {
        cout << "Blad zero" << endl;
        return 0;
    }
}
int main() {
    int wybor;
    float liczba1, liczba2, wynik;
    do {
        cout << "Wybierz funkcje:\n";
        cout << "1. Suma\n";
        cout << "2. Roznica\n";
        cout << "3. Iloczyn\n";
        cout << "4. Iloraz\n";
        cout << "0. Wyjscie\n";
        cout << "Wybrana funkcja: ";
        cin >> wybor;
        if (wybor >= 1 && wybor <= 4) {
            cout << "Podaj pierwsza liczbe: ";
            cin >> liczba1;
            cout << "Podaj druga liczbe: ";
            cin >> liczba2;
            switch (wybor) {
                case 1: wynik = suma(liczba1, liczba2);break;
                case 2: wynik = roznica(liczba1, liczba2);break;
                case 3: wynik = iloczyn(liczba1, liczba2);break;
                case 4: wynik = iloraz(liczba1, liczba2);break;
            }
            cout << "Wynik: " << wynik << endl;
        }
    } while (wybor != 0);
    cout << "Koniec programu." << endl;
    return 0;
} 