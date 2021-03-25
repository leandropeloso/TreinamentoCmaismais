/*
20) Desenvolva um programa que leia um número inteiro e mostre se ele é PAR ou 
ÍMPAR.

*/

#include <Bits/stdc++.h>

using namespace std;

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num;

	cout << "Digite um número: ";
	cin >> num;
	
	if (num % 2 == 0){
		cout << endl << "O número digitado é PAR.";
		cout << endl;
		}
		
		else {
			cout << endl << "O número digitado é ÍMPAR.";
			cout << endl;
		}
		
	return 0;
	
}