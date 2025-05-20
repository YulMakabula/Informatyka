#include <iostream>
using namespace std;
int CalculatePowerRecurcive (int podstawowa , int wykladnik ){
	if (wykladnik==0)
		return 1;
	else
		return podstawowa*CalculatePowerRecurcive(podstawowa, wykladnik - 1);
}

int DisplayResult (int podstawowa, int wykladnik, int wynik){
	cout << podstawowa << " do potegi " << wykladnik << " wynosi: " << wynik <<endl;
}


int main(){
	int podstawowa , wykladnik;
	cout << "Podaj liczbe podstawowa: ";
	cin >> podstawowa;
	cout << "Podaj wykladnik:";
	cin >> wykladnik;
	int wynik = CalculatePowerRecurcive(podstawowa, wykladnik);
	DisplayResult(podstawowa, wykladnik,wynik);
	return 0;
}