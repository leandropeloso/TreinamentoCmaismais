/*
20) Desenvolva um programa que leia um n�mero inteiro e mostre se ele � PAR ou 
�MPAR.

*/

#include <Bits/stdc++.h>

using namespace std;

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num;

	cout << "Digite um n�mero: ";
	cin >> num;
	
	if (num % 2 == 0){
		cout << endl << "O n�mero digitado � PAR.";
		cout << endl;
		}
		
		else {
			cout << endl << "O n�mero digitado � �MPAR.";
			cout << endl;
		}
		
	return 0;
	
}