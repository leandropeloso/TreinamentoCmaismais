/*
PASSO 03 - CONDI��ES COMPOSTAS
26) Escreva um algoritmo que leia dois n�meros inteiros e compare-os, mostrando 
na tela uma das mensagens abaixo:
 
- O primeiro valor � o maior
 
- O segundo valor � o maior
 
- N�o existe valor maior, os dois s�o iguais

*/

#include <Bits/stdc++.h>

using namespace std;

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int N1, N2;
	
	cout << "Digite dois n�meros para compara��o maior/menor.";
	cout << endl << endl;
	
	cout << "Digite o primeiro n�mero: ";
	cin >> N1;

	cout << "Digite o segundo n�mero: ";
	cin >> N2;	
		
	if (N1 > N2) {
		cout << endl << "O primeiro n�mero � MAIOR que o segundo n�mero.";
		cout << endl;
		}
		
		if (N1 < N2){
			cout << endl << "O primeiro n�mero � MENOR que o segundo n�mero.";
			cout << endl;
		}
		
		if (N1 == N2) {
			cout << endl << "N�o existe valor maior, os dois n�meros s�o iguais.";
			cout << endl;
		}
	
	return 0;
	
}
