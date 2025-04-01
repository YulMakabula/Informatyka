#include <iostream>
#include <cstring> 
using namespace std;
	int main(){
		char text [20];
    cout << "Podaj ciag znakow (max 20): " << endl;
	cin.getline (text, 20);
	for (int i=0; i<20; i++){
		if( text[i]=='a'){
		text[i]='o';
	}
	}
	cout << text << endl;
}
