/*
28) Fa�a um programa que leia a largura e o comprimento de um terreno 
retangular, calculando e mostrando a sua �rea em m�. O programa tamb�m 
devemostrar a classifica��o desse terreno, de acordo com a lista abaixo:
 
- Abaixo de 100m� = TERRENO POPULAR
 
- Entre 100m� e 500m� = TERRENO MASTER
 
- Acima de 500m� = TERRENO VIP

*/

#include <Bits/stdc++.h>

using namespace std;

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	float L, C, metragem;
	
	cout << "Digite a largura e o cumprimento de um terreno retangular para classifica��o social em: [TERRENO VIP - acima de 500m�], [TERRENO MASTER - entre 100m� e 500m�], [TERRENO POPULAR - abaixo de 100m�].";
	cout << endl << endl;
	
	cout << "Digite a LARGURA do terreno: ";
	cin >> L;

	cout << endl;
	
	cout << "Digite o CUMPRIMENTO do terreno: ";
	cin >> C;	
	
	metragem = L * C;
		
	if (metragem > 500) {
		cout << endl << "TERRENO VIP - terreno com " << metragem << "m�.";
		cout << endl;
		}
		
		if (metragem >= 100 && metragem <= 500){
			cout << endl << "TERRENO MASTER - terreno com " << metragem << "m�.";
			cout << endl;
		}
		
		if (metragem < 100) {
			cout << endl << "TERRENO POPULAR - terreno com " << metragem << "m�.";
			cout << endl;
		}
		
	return 0;
	
}
