#include <iostream>
#include <locale.h>
using namespace std;
/* 
Maria depositou R$ 15.800,00 em sua conta de aplicações, enquanto João, no mesmo dia, depositou
11.000,00 na dele. Sabe-se que Maria ganha R$ 100,00 de juros por mês e João ganha R$ 200,00. Faça
um programa, em C++, que calcule e imprima quantos anos serão necessários para que João tenha um
Saldo maior que Maria
*/

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	double i, anos, saldoMaria, saldoJoao;
	
	saldoMaria = 15800;
	saldoJoao = 11000;
	i = 1;
	anos = 0;
	
	do {
		saldoMaria += 100;
		saldoJoao += 200;
		i++;
		
		if (i >= 12) {
			i = 1;
			anos++;
		}
		
	}while (saldoJoao < saldoMaria);
	
	cout<<"João precisa de "<<i<<" anos para que tenha saldo maior que Maria.";
	
	
	return 0;
}
