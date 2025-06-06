#include <iostream>
#include <locale.h>
using namespace std;

double calcularSalario(int horasTrabalhadas, int valorPagoPorHora){
	double salarioTotal = horasTrabalhadas * valorPagoPorHora;
	if(horasTrabalhadas > 40){
		salarioTotal /= 0.5;
	}
	return salarioTotal;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int horasTrabalhadas, valorPorHora;
	
	cout<<"Digite as horas trabalhadas: "<<endl;
	cin>>horasTrabalhadas;
	cout<<"Digite o valor pago por hora: "<<endl;
	cin>>valorPorHora;
	
	
	
	cout<<"Salário total: "<<calcularSalario(horasTrabalhadas, valorPorHora);
	
	return 0;
}
