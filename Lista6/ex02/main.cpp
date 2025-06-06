#include <iostream>

/* 
1 - ler o peso de 100 malas de viagem. 
2 - Escrever “Excesso de Peso” se > 30 kg. Caso contrário, escrever “Peso Normal”. 
3 - Calcular e imprimir a quantidade de malas com peso superior a 20 Kg.
*/

using namespace std;

int main(int argc, char** argv) {
	
	double peso;
	int i, pesoSuperior20kg;

	i = 1;
	pesoSuperior20kg = 0;	
	
	do {
		cout << "Digite o peso da mala: " << endl;
		cin >> peso;
		
		if (peso > 30) {
			cout<<"Excesso de peso!"<<endl;
		} else {
			cout<<"Peso normal."<<endl;
		}
		
		if (peso > 20) {
			pesoSuperior20kg += 1;
		}
		
		i++;
			
	} while (i <= 100);
	
	cout <<"Quantidade superior a 20kg: ";
	cout<<pesoSuperior20kg;
	
	return 0;
}
