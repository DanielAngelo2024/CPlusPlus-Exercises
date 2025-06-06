#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int sexo, idade, peso, altura, flag, somaMasc, somaAltM, mediaAltM, menorPesoM, nomeAlt, altMaisAlt;
	string nome, nomeMaisAlt;
	somaAltM = 0;
	menorPesoM = 9999;
	altMaisAlt = -9999;
	somaMasc = 0;
	
	do {
		cout<<"Digite o sexo (1-Masculino, 2-Feminino):"<<endl;
		cin>>sexo;
		cout<<"Digite a idade: "<<endl;
		cin>>idade;
		cout<<"Digite o peso:"<<endl;
		cin>>peso;
		cout<<"Digite a altura:"<<endl;
		cin>>altura;
		cout<<"Digite o nome: "<<endl;
		cin>>nome;
		
		if (sexo == 1){
			somaAltM += altura;
			somaMasc++;
			if (peso < menorPesoM){
				menorPesoM = peso;
			}
		} else if (altura > altMaisAlt) {
			altMaisAlt = altura;
			nomeMaisAlt = nome;
		}
		
		cout<<"Deseja continuar?"<<endl;
		cin>>flag;
		
	} while (flag == 1);
	
	mediaAltM = somaAltM / somaMasc;
	
	cout<<"A média da altura masculino é de: "<< mediaAltM<<endl;
	cout<<"O menor peso masculino é de: "<<menorPesoM<<endl;
	cout<<"O nome da atleta mais alta é "<<nomeMaisAlt<<endl;
	cout<<"A altura da mais alta é de "<<altMaisAlt;
	
	return 0;
}
