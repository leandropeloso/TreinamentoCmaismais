/*
27) Crie um programa que leia duas notas de um aluno e calcule a sua m�dia, 
mostrando uma mensagem no final, de acordo com a m�dia atingida:
 
- M�dia at� 4.9: REPROVADO
 
- M�dia entre 5.0 e 6.9: RECUPERA��O
 
- M�dia 7.0 ou superior: APROVADO

*/

#include <Bits/stdc++.h>

using namespace std;

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	float N1, N2, media;
	
	cout << "Digite duas notas [0 a 10 pts] para saber se estar� APROVADO [m�dia 7.0 ou superior], em RECUPERA��O [m�dia entre 5.0 e 6.9] ou REPROVADO [m�dia at� 4.9].";
	cout << endl << endl;
	
	cout << "Digite a primeira nota: ";
	cin >> N1;

	cout << "Digite a segunda nota: ";
	cin >> N2;	
	
	media = (N1 + N2) / 2;
		
	if (media >= 7 && media <= 10) {
		cout << endl << "APROVADO - sua m�dia final � de " << media << " pontos.";
		cout << endl;
		}
		
		if (media >= 5 && media < 6.9){
			cout << endl << "RECUPERA��O - sua m�dia final � de " << media << " pontos.";
			cout << endl;
		}
		
		if (media <= 4.9) {
			cout << endl << "REPROVADO - sua m�dia final � de " << media << " pontos.";
			cout << endl;
		}
		
		else if (media > 10){
			cout << endl << "INV�LIDO - as notas digitadas superam o somat�rio da m�dia m�xima.";
			cout << endl;
		}
	
	return 0;
	
}
