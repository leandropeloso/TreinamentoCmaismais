/*
18) Fa�a um programa que leia o ano de nascimento de uma pessoa, calcule a idade 
dela e depois mostre se ela pode ou n�o votar.

*/

#include <Bits/stdc++.h>

using namespace std;

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int ano_nasc, ano_atual, ano_calc;
	
	cout << "Qual o ano de seu nascimento? ";
	cin >> ano_nasc;
	
	cout << endl << "Qual ano n�s estamos? ";
	cin >> ano_atual;
	
	ano_calc = ano_atual - ano_nasc;
	
	if (ano_calc >= 18 && ano_calc < 70){
		cout << endl << "O senhor(a) DEVE votar, pois para sua idade o voto � obrigat�rio. ";
		cout << endl;
		}
		
		if (ano_calc >= 70){
			cout << endl << "O senhor(a) PODE votar, mas trata-se de voto facultativo, ou seja, n�o � obrigat�rio. ";
			cout << endl;
		}
		
		if (ano_calc >= 16 && ano_calc < 18){
			cout << endl << "O senhor(a) PODE votar, mas trata-se de voto facultativo, ou seja, n�o � obrigat�rio. ";
			cout << endl;
		}

		else if (ano_calc < 16){
			cout << endl << "O senhor(a) N�O est� apto a votar, pois n�o tem idade segundo a Constitui��o Federal.";
			cout << endl;
		}
	
	return 0;
	
}