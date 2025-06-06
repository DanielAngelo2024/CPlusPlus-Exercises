#include <iostream>
#include <locale.h>
/*ler um conjunto de informa��es: sexo (1 � Masculino, 2 � Feminino)
Ler idade, peso e altura de 80 atletas que participaram de uma olimp�ada, calcular e imprimir: a) A
m�dia das alturas dos atletas masculinos; b) O menor peso do sexo masculino. 
*/
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int i, idade, peso, sexo, altura, quantMasculino, menorPesoMasculino, somaAlturaMasculino;
	double mediaAlturaMasculino;
	
	i = 0;
	menorPesoMasculino = 99999;
	somaAlturaMasculino = 0;
	quantMasculino = 0;
	
	do {
		cout<<"Digite a idade: "<<endl;
		cin>>idade;
		cout<<"Digite o peso em kg: "<<endl;
		cin>>peso;
		cout<<"Digite a altura em cm: "<<endl;
		cin>>altura;
		cout<<"Digite o sexo (1-Masculino 2-Feminino)"<<endl;
		cin>>sexo;
		
		if (sexo == 1) {
			quantMasculino++;
			somaAlturaMasculino += altura;
			if (peso < menorPesoMasculino){
				menorPesoMasculino = peso;
			}
		}
				
		i++;
	} while (i < 2);
	mediaAlturaMasculino = somaAlturaMasculino / quantMasculino ;
	
	cout<<"A m�dia da altura masculino � de: "<<mediaAlturaMasculino<<endl;
	cout<<"O menor peso masculino � de: "<<menorPesoMasculino;
	return 0;
}
