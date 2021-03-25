/*
19) Crie um algoritmo que leia o nome e as duas notas de um aluno, calcule a sua 
média e mostre na tela. No final, analise a média e mostre se o aluno teve ou 
não um bom aproveitamento (se ficou acima da média 7.0).

*/

#include <Bits/stdc++.h>

using namespace std;

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	float nota_1, nota_2, media;
	string nome;
	
	cout << "Qual o seu nome? ";
	cin >> nome;
	
	cout << endl << "Qual a sua primeira nota (0 a 10 pts)? ";
	cin >> nota_1;

	cout << endl << "Qual a sua segunda nota (0 a 10 pts)? ";
	cin >> nota_2;
	
	media = (nota_1 + nota_2) / 2;	
		
	if (media >= 7){
		cout << endl << "O senhor(a) TEVE um bom aproveitamento, pois sua nota média foi de " << media << " pontos.";
		cout << endl;
		}
		
		else if (media < 7){
			cout << endl << "O senhor(a) NÃO teve um bom aproveitamento, pois sua nota média foi de " << media << " pontos.";
			cout << endl;
		}
		
	return 0;
	
}