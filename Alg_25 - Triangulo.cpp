/*
25) [DESAFIO] Crie um programa que leia o tamanho de tr�s segmentos de reta. 
Analise seus comprimentos e diga se � poss�vel formar um tri�ngulo com essas 
retas. Matematicamente, para tr�s segmentos formarem um tri�ngulo, o comprimento 
de cada lado deve ser menor que a soma dos outros dois.
*/

#include <Bits/stdc++.h>

using namespace std;

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	float L1, L2, L3;
	
	bool EQ, ES, TRI;
	
	cout << "Digite tr�s segmentos de reta a fim de saber se � poss�vel formar um tri�ngulo.";
	cout << endl << endl;
	
	cout << "Digite o primeiro lado: ";
	cin >> L1;

	cout << "Digite o segundo lado: ";
	cin >> L2;	
		
	cout << "Digite o terceiro lado: ";
	cin >> L3;
	
	TRI = (L1 < L2 + L3) && (L2 < L1 + L3) && (L3 < L1 + L2);
    EQ = (L1 == L2) && (L2 == L3);
    ES = (L1 != L2) && (L2 != L3) && (L1 != L3);
			
	if (TRI == true) {
		cout << endl << "As medidas informadas FOMAM um TRI�NGULO.";
		cout << endl;
		}
		
		else {
			cout << endl << "As medidas informadas N�O FORMAM um TRI�NGULO.";
			cout << endl;
		}
		
		if (EQ == true && TRI == true) {
			cout << endl << "As medidas informadas resultar�o em um tri�ngulo EQUIL�TERO, pois todos os lados s�o CONGRUENTES.";
			cout << endl;
		}
		
		if (ES == true && TRI == true){
			cout << endl << "As medidas informadas resultar�o em um triangulo ESCALENO, pois possuem medidas DIFERENTES.";
			cout << endl;
		}
		
	return 0;
	
}
