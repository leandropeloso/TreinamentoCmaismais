/*
17) Escreva um programa que pergunte a velocidade de um carro. Caso ultrapasse 
80Km/h, exiba uma mensagem dizendo que o usuário foi multado. Nesse caso, exiba 
o valor da multa, cobrando R$5 por cada Km acima da velocidade permitida.
*/

#include <Bits/stdc++.h>

using namespace std;

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int vel, km, multa;
	
	cout << "Qual a velocidade de seu veículo? ";
	cin >> vel;
	
	cout << endl << "Por quantos quilômetros o senhor andou acima de 80km/h? ";
	cin >> km;
	
	multa = km * 5;
	
	if (vel >= 80){
		cout << endl << "O senhor(a) foi multado, pois ultrapassou o limite de velocidade que é de 80 Km/h. ";
		cout << endl << endl << "O valor da multa será de R$ " << multa << " reais.";
		cout << endl;
		}
		
		else{
			cout << endl << "O senhor(a) está de parabéns, pois atende aos comandos da lei de trânsito! ";
			cout << endl;
		}

	
	return 0;
	
}