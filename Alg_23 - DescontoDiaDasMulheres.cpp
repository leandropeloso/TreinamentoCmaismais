/*
23) Numa promo��o exclusiva para o Dia da Mulher, uma loja quer dar descontos 
para todos, mas especialmente para mulheres. Fa�a um programa que leia nome, 
sexo e o valor das compras do cliente e calcule o pre�o com desconto. Sabendo 
que:
 
- Homens ganham 5% de desconto
 
- Mulheres ganham 13% de desconto

*/

#include <Bits/stdc++.h>

using namespace std;

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	float valor_compra;
	string nome;
	char opc;

	cout << "Qual � o seu nome: ";
	cin >> nome;
	
	cout << endl << "Qual o seu sexo [F] ou [M]: ";
	cin >> opc;
	
	cout << endl << "Qual o valor da sua compra: ";
	cin >> valor_compra;
	
	if (opc == 'M' or opc == 'm') {
		cout << endl << "O senhor ter� 5% de desconto, ou seja, o valor final de sua compra � de " << valor_compra - ((valor_compra * 5) / 100) << " reais.";
		cout << endl;
		}
		
		else {
			cout << endl << "A senhora ter� 13% de desconto, ou seja, o valor final de sua compra � de " << valor_compra - ((valor_compra * 13) / 100) << " reais.";
			cout << endl;
		}
		
	return 0;
	
}
