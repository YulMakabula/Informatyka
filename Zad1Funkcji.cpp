#include <iostream>
using namespace std;
//Zad 1
bool Funkcja(int liczba){
	if(liczba%2==0){
		return true;
	}else {
		return false;
		}
	}
	int main (){
		int liczba;
	cout << "Podaj liczbe calkowita: ";
	cin >> liczba;
	bool wynik = Funkcja (liczba);
		if (wynik == true){
			cout << "Liczba " << liczba << " jest parzysta." << endl;
	}else{
		cout << "Liczba " << liczba << " jest nieparzysta. " << endl;
	}
	return 0;
}

