/*
22) Escreva um programa que leia o ano de nascimento de um rapaz e mostre a sua 
situação em relação ao alistamento militar.
 
- Se estiver antes dos 18 anos, mostre em quantos anos faltam para o 
alistamento.
 
- Se já tiver depois dos 18 anos, mostre quantos anos já se passaram do 
alistamento.

*/

#include <Bits/stdc++.h>

using namespace std;

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int ano_nasc, ano_atual, idade;

	cout << "Digite o ano de seu nascimento: ";
	cin >> ano_nasc;
	
	cout << endl << "Digite o ano que estamos: ";
	cin >> ano_atual;
	
	idade = ano_atual - ano_nasc;
	
	if (idade < 18) {
		cout << endl << "O senhor tem " << idade << " anos e ainda lhe falta " << 18 - idade << " anos para o seu alistamento militar.";
		cout << endl;
		}
		
		else if (idade > 18) {
			cout << endl << "O senhor tem " << idade << " anos e já se passaram " << idade - 18 << " anos do seu alistamento militar.";
			cout << endl;
		}
		
	return 0;
	
}
