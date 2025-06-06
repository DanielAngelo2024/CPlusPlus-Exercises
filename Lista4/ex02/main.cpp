#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int sexo, idade, i, quantHomem, quantMulher, pessoas23e30;
	double renda, somaSalarioMulher, mediaSalarioMulher;
	
	i = 1;
	quantHomem = 0;
	quantMulher = 0;
	mediaSalarioMulher = 0;
	pessoas23e30 = 0;
	somaSalarioMulher = 0;
	
	
	while (i <= 5){
		cout << "Digite o sexo(1-Homem, 2-Mulher) da " << i << "° pessoa: " << endl;
		cin >> sexo;
		cout << "Digite a idade da " << i << "° pessoa: " << endl;
		cin >> idade;
		cout << "Digite a renda da " << i << "° pessoa:" << endl;
		cout << "R$";
		cin >> renda;
		
		cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
		
		if (sexo == 1) {
			quantHomem++;
		} else if (sexo == 2) {
			quantMulher++;
			somaSalarioMulher += renda;
		}
		
		if (renda > 3500 && idade >= 23 && idade <= 30) {
			pessoas23e30++;
		}
		i++;
	}
	
	mediaSalarioMulher = somaSalarioMulher / quantMulher;
	
	cout << "Quantidade de mulheres: " << quantMulher << endl;
	cout << "Quantidade de homens: " << quantHomem << endl;
	cout << "Média salarial das mulheres: R$" << mediaSalarioMulher << endl;
	cout << "Quantidade que ganha mais que R$3500 e idade entre 23 e 30: " << pessoas23e30 << endl;
	 
	return 0;
}
