#include <iostream>
#include <locale.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	
	int anos, i;
	double alturaChico, alturaZe;
	
	i = 1;
	anos = 0;
	alturaChico = 1.50;
	alturaZe = 1.10;
	
	do {
		alturaChico += 0.02;
		alturaZe += 0.03;
		if (i > 12){
			i = 1;
			anos++;
		}
		i++;
		
	}while (alturaChico > alturaZe);
	
	cout<<"Serão necessários "<<anos<<" anos para Zé ficar maior que chico";
	
	return 0;
}
