#include <iostream>
#include <locale>
using namespace std;

/*
Exercício 1: Ajuste Dinâmico de Salário
Em uma empresa de tecnologia, o RH precisa atualizar o salário de um
funcionário após uma promoção. O programa deve:
1.Receber o salário atual do funcionário.
2.Receber o percentual de aumento.
3.Utilizar um ponteiro para modificar o valor do salário.
4.Exibir o salário antes e depois do aumento. 
 */


int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int salarioAtual, slrAntes, slrDepois;
	float percentualAumento;
	
	cout<<"Digite o salário atual:"<<endl;
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
