#include <iostream>
#include <locale>
using namespace std;

/*
Exerc�cio 1: Ajuste Din�mico de Sal�rio
Em uma empresa de tecnologia, o RH precisa atualizar o sal�rio de um
funcion�rio ap�s uma promo��o. O programa deve:
1.Receber o sal�rio atual do funcion�rio.
2.Receber o percentual de aumento.
3.Utilizar um ponteiro para modificar o valor do sal�rio.
4.Exibir o sal�rio antes e depois do aumento. 
 */


int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int salarioAtual, slrAntes, slrDepois;
	float percentualAumento;
	
	cout<<"Digite o sal�rio atual:"<<endl;
	cin>>salarioAtual;
	
	int* ptrSalario = &salarioAtual;
	
	cout<<"Digite o percentual de aumento:"<<endl;
	cin>>percentualAumento;
	
	slrAntes = salarioAtual;
	*ptrSalario += salarioAtual / percentualAumento;
	
	
	cout<<"Salario atual: "<<slrAntes<<endl;
	cout<<"Novo salario: "<<*ptrSalario;
	return 0;
}
