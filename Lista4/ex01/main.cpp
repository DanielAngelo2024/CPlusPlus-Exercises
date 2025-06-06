#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int i=0;
	
	double nota, media, somaNota;
	somaNota = 0;
	
	while (i < 40){
		cout<<"Digite a "<<i<<"° nota: "<<endl;
		cin>>nota;
		
		somaNota += nota;
		i++; 
	}
	
	media = somaNota / i;
	cout<<"A média das notas é: "<<media<<endl;
	
	return 0;
}
