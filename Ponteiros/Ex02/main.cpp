#include <iostream>
#include<locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
/*
Comparação de Idades
Dois amigos querem saber qual deles é mais velho. O programa deve:
1.Solicitar ao usuário duas idades.
2.Utilizar ponteiros para comparar os valores.
3.Exibir a idade maior e a diferença entre elas.
*/


int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int idade1, idade2, diferenca;
	
	
	cout<<"Digite a primeira idade:"<<endl;
	cin>>idade1;
	int* ptrIdade1 = &idade1;
	cout<<"Digite a segunda idade:"<<endl;
	cin>>idade2;
	int* ptrIdade2 = &idade2;
	
	if(*ptrIdade1 > *ptrIdade2){
		cout<<"A primeira idade é maior! "<<*ptrIdade1<<endl;
		diferenca = *ptrIdade1 - *ptrIdade2;
		cout<<"Diferença de "<<diferenca<<" de idade."<<endl;
	}else if(*ptrIdade2 > *ptrIdade1){
		cout<<"A segunda idade é maior! "<<*ptrIdade2<<endl;
		diferenca = *ptrIdade2 - *ptrIdade1;
		cout<<"Diferença de "<<diferenca<<" de idade."<<endl;
	}else{
		cout<<"São iguais";
	}
	
	
	return 0;
}

