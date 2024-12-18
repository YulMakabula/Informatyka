#include <iostream>

using namespace std;

int main() {

    int szerokosc, wysokosc;


    cout << "Podaj szerokosc trojkata: ";

    cin >> szerokosc;

    cout << "Podaj wysokosc trojkata: ";

    cin >> wysokosc;


    for (int wiersz = 0; wiersz < wysokosc; wiersz++) { 

        for (int spacja = 0; spacja < wiersz; spacja++) {

            cout << " ";

        }

        int liczba_gwiazdek = szerokosc - (2 * wiersz);

        if (liczba_gwiazdek > 0) { 

            for (int gwiazdka = 0; gwiazdka < liczba_gwiazdek; gwiazdka++) {

                cout << "*";

            }

        }

        cout << endl;

    }

    return 0;

} 