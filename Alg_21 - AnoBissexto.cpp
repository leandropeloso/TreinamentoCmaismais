/*
21) Fa�a um algoritmo que leia um determinado ano e mostre se ele � ou n�o 
BISSEXTO.

*/

#include <Bits/stdc++.h>

using namespace std;

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int ano;

	cout << "Digite o ano para saber se � bissexto: ";
	cin >> ano;
	
	if ( (ano % 400 == 0) || ( (ano % 4 == 0) && (ano % 100 != 0) ) ) {
		cout << endl << "O digitado � BISSEXTO.";
		cout << endl;
		}
		
		else {
			cout << endl << "O ano digitado N�O � bissexto.";
			cout << endl;
		}
		
	return 0;
	
}
