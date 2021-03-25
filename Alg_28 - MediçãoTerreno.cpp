/*
28) Faça um programa que leia a largura e o comprimento de um terreno 
retangular, calculando e mostrando a sua área em m². O programa também 
devemostrar a classificação desse terreno, de acordo com a lista abaixo:
 
- Abaixo de 100m² = TERRENO POPULAR
 
- Entre 100m² e 500m² = TERRENO MASTER
 
- Acima de 500m² = TERRENO VIP

*/

#include <Bits/stdc++.h>

using namespace std;

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	float L, C, metragem;
	
	cout << "Digite a largura e o cumprimento de um terreno retangular para classificação social em: [TERRENO VIP - acima de 500m²], [TERRENO MASTER - entre 100m² e 500m²], [TERRENO POPULAR - abaixo de 100m²].";
	cout << endl << endl;
	
	cout << "Digite a LARGURA do terreno: ";
	cin >> L;

	cout << endl;
	
	cout << "Digite o CUMPRIMENTO do terreno: ";
	cin >> C;	
	
	metragem = L * C;
		
	if (metragem > 500) {
		cout << endl << "TERRENO VIP - terreno com " << metragem << "m².";
		cout << endl;
		}
		
		if (metragem >= 100 && metragem <= 500){
			cout << endl << "TERRENO MASTER - terreno com " << metragem << "m².";
			cout << endl;
		}
		
		if (metragem < 100) {
			cout << endl << "TERRENO POPULAR - terreno com " << metragem << "m².";
			cout << endl;
		}
		
	return 0;
	
}
