#include <iostream>
#include <locale.h>
/* 
1-Ler sexo (1 – Masculino, 2 – Feminino)
2-Ler idade
3-Ler peso
4-Ler altura
5-calcular e imprimir:
	a) A média das alturas dos atletas masculinos
	b) O menor peso do sexo masculino. 
*/

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int i, flag, idade, sexo, peso, altura, menorPesoM, somaM, somaAlturaM;
	double mediaAlturaM;
	
	i = 0;
	menorPesoM = 99999;
	somaAlturaM = 0;
	
	do {
		i++;
		cout<<"---------"<<i<<"° Atleta:"<<"---------"<<endl;
		cout<<"Digite o sexo (1-Masculino, 2-Feminino):"<<endl;
		cin>>sexo;
		cout<<"Digite a idade:"<<endl;
		cin>>idade;
		cout<<"Digite o peso em kg: "<<endl;
		cin>>peso;
		cout<<"Digite a altura em cm: "<<endl;
		cin>>altura;
		
		if(sexo == 1){
			somaM++;
			somaAlturaM += altura;
			
			if (peso < menorPesoM){
				menorPesoM = peso;
			}
			
		}
		
		cout<<"Deseja continuar? (1-Sim, 2-Não)"<<endl;
		cin>>flag;
		
	} while (flag == 1);
	
	mediaAlturaM = somaAlturaM / somaM;
	
	cout<<"A média das alturas masculino é de: "<<mediaAlturaM<<"cm"<<endl;
	cout<<"O menor peso masculino é de: "<<menorPesoM;
	
	return 0;
}
