/*
24) Faça um algoritmo que pergunte a distância que um passageiro deseja 
percorrer em Km. Calcule o preço da passagem, cobrando R$0.50 por Km para 
viagens até 200Km e R$0.45 para viagens mais longas.

*/

#include <Bits/stdc++.h>

using namespace std;

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	float distancia, calcA, calcB, precoA, precoB;
	
	precoA = 0.50;
	precoB = 0.45;
	
	cout << "Qual distância o senhor deseja percorrer em [Km]? ";
	cin >> distancia;
	
	calcA = precoA * distancia;
	calcB = precoB * distancia;
	
	if (distancia <= 200) {
		cout << endl << "O preço da sua passagem será de " << calcA << " reais.";
		cout << endl;
		}
		
		else {
			cout << endl << "O preço da sua passagem será de " << calcB << " reais.";
			cout << endl;
		}
		
	return 0;
	
}
