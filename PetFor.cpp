#include <iostream>
using namespace std;
int main() {
	//Zad1
	int N;
	int suma=0;
	cout << "Podaj licbe N: ";
	cin >> N;
	for (int i=1;i<=N;i++){
		suma +=i;
}
	cout  << "Suma liczb od 1 do " << N << " wynosi: " << suma << endl;


}