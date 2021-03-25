/*
21) Faça um algoritmo que leia um determinado ano e mostre se ele é ou não 
BISSEXTO.

*/

#include <Bits/stdc++.h>

using namespace std;

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int ano;

	cout << "Digite o ano para saber se é bissexto: ";
	cin >> ano;
	
	if ( (ano % 400 == 0) || ( (ano % 4 == 0) && (ano % 100 != 0) ) ) {
		cout << endl << "O digitado é BISSEXTO.";
		cout << endl;
		}
		
		else {
			cout << endl << "O ano digitado NÃO é bissexto.";
			cout << endl;
		}
		
	return 0;
	
}
