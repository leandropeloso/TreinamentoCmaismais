/*
25) [DESAFIO] Crie um programa que leia o tamanho de três segmentos de reta. 
Analise seus comprimentos e diga se é possível formar um triângulo com essas 
retas. Matematicamente, para três segmentos formarem um triângulo, o comprimento 
de cada lado deve ser menor que a soma dos outros dois.
*/

#include <Bits/stdc++.h>

using namespace std;

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	float L1, L2, L3;
	
	bool EQ, ES, TRI;
	
	cout << "Digite três segmentos de reta a fim de saber se é possível formar um triângulo.";
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
		cout << endl << "As medidas informadas FOMAM um TRIÂNGULO.";
		cout << endl;
		}
		
		else {
			cout << endl << "As medidas informadas NÃO FORMAM um TRIÂNGULO.";
			cout << endl;
		}
		
		if (EQ == true && TRI == true) {
			cout << endl << "As medidas informadas resultarão em um triângulo EQUILÁTERO, pois todos os lados são CONGRUENTES.";
			cout << endl;
		}
		
		if (ES == true && TRI == true){
			cout << endl << "As medidas informadas resultarão em um triangulo ESCALENO, pois possuem medidas DIFERENTES.";
			cout << endl;
		}
		
	return 0;
	
}
