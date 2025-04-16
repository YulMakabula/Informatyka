#include <iostream>
#include <string>
using namespace std;
//Zad3
string GetTextFromUser() {
   string text;
   cout << "Podaj ciag znakow: ";
   getline(cin, text);
   return text;
}
string ReverseString(string text) {
   int d = text.length();
   string odwrotnosc;
   for (int i = 0; i < d; i++) {
       odwrotnosc += text[d - i - 1];
   }
   return odwrotnosc;
}
void DisplayResult(string reversedText) {
   cout << "Odwrocony ciag: " << reversedText << endl;
}
int main() {
   string text = GetTextFromUser();
   string reversedText = ReverseString(text);
   DisplayResult(reversedText);
   return 0;
}