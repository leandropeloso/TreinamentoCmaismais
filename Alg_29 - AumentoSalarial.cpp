/*
29) Desenvolva um programa que leia o nome de um funcionário, seu salário, 
quantos anos ele trabalha na empresa e mostre seu novo salário, reajustado de 
acordo com a tabela a seguir:
 
- Até 3 anos de empresa: aumento de 3%
 
- entre 3 e 10 anos: aumento de 12.5%
 
- 10 anos ou mais: aumento de 20%

*/

#include <Bits/stdc++.h>

using namespace std;

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	string nome;
	float Sal, Tempo;
	
	cout << "_________________REAJUSTE SALARIAL POR TEMPO DE SERVIÇO_________________";
	cout << endl << endl;
	
	cout << "Digite o seu nome: ";
	cin >> nome;
	cout << endl << endl;
	
	cout << "Digite qual o seu salário atual: ";
	cin >> Sal;
	cout << endl << endl;
	
	cout << "Digite quanto tempo o(a) senhor(a) trabalha nesta empresa: ";
	cin >> Tempo;
	cout << endl << endl;
	
	if (Tempo >= 10) {
		cout << "Seu aumento será de R$ " << (Sal * 20) / 100 << " reais, ou seja, seu novo salário será de R$ " << Sal + ((Sal * 20) / 100) << " reais.";
		cout << endl;
		}
		
		if (Tempo >= 3 && Tempo < 10) {
			cout << "Seu aumento será de R$ " << (Sal * 12.5) / 100 << " reais, ou seja, seu novo salário será de R$ " << Sal + ((Sal * 12.5) / 100) << " reais.";
			cout << endl;
		}
		
		if (Tempo < 3){
			cout << "Seu aumento será de R$ " << (Sal * 3) / 100 << " reais, ou seja, seu novo salário será de R$ " << Sal + ((Sal * 3) / 100) << " reais.";
			cout << endl;
		}
		
	return 0;
	
}
