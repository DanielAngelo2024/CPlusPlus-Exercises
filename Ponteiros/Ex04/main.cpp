#include <iostream>
#include<locale>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Analisando Temperaturas Semanais
Um meteorologista deseja analisar a variação de temperatura
durante uma semana. O programa deve:
1.Solicitar sete temperaturas ao usuário.
2.Utilizar um ponteiro para encontrar e exibir a maior e a menor
temperatura.
*/
int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
		
	int temperaturas[7];
	int maiorTemperatura = -9999;
	int menorTemperatura = 9999;
	int* ptrMaiorTemperatura = &maiorTemperatura;
	int* ptrMenorTemperatura = &menorTemperatura;
	
	for(int i = 0; i < 7; i++){
		cout<<"Digite a temperatura do "<<i+1<<"° dia:"<<endl;
		cin>>temperaturas[i];
		
		if(temperaturas[i] > maiorTemperatura){
			maiorTemperatura = temperaturas[i];
		}
		if(temperaturas[i] < menorTemperatura){
			menorTemperatura = temperaturas[i];
		}
	}
	
	cout<<"Maior temperatura: "<<*ptrMaiorTemperatura<<endl;
	cout<<"Menor temperatura: "<<*ptrMenorTemperatura;
	return 0;
}
