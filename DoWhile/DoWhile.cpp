#include <iostream>
using namespace std;
int main(){
	//zad1
	int N;
	cout <<"Podaj liczbe calkowite ";
	cin >> N;
	cout << "Liczbe parzyste od 2 do " << N << endl;
	short count=2;
	while(count <= N)
	{
		cout << count << endl;
		count +=2;
	}
	
