#include <iostream>
#include <locale.h>
#include <windows.h>
#include <string>


using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char** argv) {
	//setlocale(LC_ALL, "char8_t");
	//------------------------------------------------------------------------------
	/*Com a biblioteca do windows e esses 2 comandos eu mudo a codepage */
	SetConsoleCP(1252); 
	SetConsoleOutputCP(1252);
	//Compativel apenas com windows
 	//------------------------------------------------------------------------------
    
	
	string dia;
	
	cout<<"Digite o dia atual: "<<endl;
	cin>>dia;
	
	if (dia=="s�bado" || dia=="S�bado" || dia=="sabado" || dia=="domingo") {
		cout<<"� fim de semana!";
	}
	else{
		cout<<dia<<" N�o � fim de semana!";
	}
	
	return 0;
}
