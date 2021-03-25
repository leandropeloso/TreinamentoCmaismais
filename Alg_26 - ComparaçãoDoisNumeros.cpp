/*
PASSO 03 - CONDIÇÕES COMPOSTAS
26) Escreva um algoritmo que leia dois números inteiros e compare-os, mostrando 
na tela uma das mensagens abaixo:
 
- O primeiro valor é o maior
 
- O segundo valor é o maior
 
- Não existe valor maior, os dois são iguais

*/

#include <Bits/stdc++.h>

using namespace std;

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int N1, N2;
	
	cout << "Digite dois números para comparação maior/menor.";
	cout << endl << endl;
	
	cout << "Digite o primeiro número: ";
	cin >> N1;

	cout << "Digite o segundo número: ";
	cin >> N2;	
		
	if (N1 > N2) {
		cout << endl << "O primeiro número é MAIOR que o segundo número.";
		cout << endl;
		}
		
		if (N1 < N2){
			cout << endl << "O primeiro número é MENOR que o segundo número.";
			cout << endl;
		}
		
		if (N1 == N2) {
			cout << endl << "Não existe valor maior, os dois números são iguais.";
			cout << endl;
		}
	
	return 0;
	
}
