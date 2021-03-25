/*
27) Crie um programa que leia duas notas de um aluno e calcule a sua média, 
mostrando uma mensagem no final, de acordo com a média atingida:
 
- Média até 4.9: REPROVADO
 
- Média entre 5.0 e 6.9: RECUPERAÇÃO
 
- Média 7.0 ou superior: APROVADO

*/

#include <Bits/stdc++.h>

using namespace std;

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	float N1, N2, media;
	
	cout << "Digite duas notas [0 a 10 pts] para saber se estará APROVADO [média 7.0 ou superior], em RECUPERAÇÃO [média entre 5.0 e 6.9] ou REPROVADO [média até 4.9].";
	cout << endl << endl;
	
	cout << "Digite a primeira nota: ";
	cin >> N1;

	cout << "Digite a segunda nota: ";
	cin >> N2;	
	
	media = (N1 + N2) / 2;
		
	if (media >= 7 && media <= 10) {
		cout << endl << "APROVADO - sua média final é de " << media << " pontos.";
		cout << endl;
		}
		
		if (media >= 5 && media < 6.9){
			cout << endl << "RECUPERAÇÃO - sua média final é de " << media << " pontos.";
			cout << endl;
		}
		
		if (media <= 4.9) {
			cout << endl << "REPROVADO - sua média final é de " << media << " pontos.";
			cout << endl;
		}
		
		else if (media > 10){
			cout << endl << "INVÁLIDO - as notas digitadas superam o somatório da média máxima.";
			cout << endl;
		}
	
	return 0;
	
}
