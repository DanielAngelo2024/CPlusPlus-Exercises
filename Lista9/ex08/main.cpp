#include <iostream>
#include <locale.h>
#include <complex>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

complex<float> somaComplexos(complex<float>complexo1, complex<float>complexo2){
	complex<float>somaComplexos;
	somaComplexos = 0;
	somaComplexos = complexo1 + complexo2;
	
	return somaComplexos;
}

complex<float>multiplicacaoComplexos(complex<float>complexo1, complex<float>complexo2){
	complex<float>multComplexos;
	multComplexos=0;
	multComplexos=complexo1*complexo2;
	return multComplexos;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	float real1, real2, img1, img2;
	
	cout<<"Digite o primeiro número real: "<<endl;
	cin>>real1;
	cout<<"Digite o primeiro número imaginario: "<<endl;
	cin>>img1;
	
	complex<float>complexo1(real1, img1);
	
	cout<<"Digite o segundo número real: "<<endl;
	cin>>real2;
	cout<<"Digite o segundo número imaginario: "<<endl;
	cin>>img2;
	
	complex<float>complexo2(real2, img2);
	complex<float>somaDosComplexos = somaComplexos(complexo1, complexo2);
	
	cout<<"Soma: ("<<real1<<"+"<<img1<<"i)+("<<real2<<"+"<<img2<<"i)"
	<<"="<<real(somaDosComplexos)<<"+"<<imag(somaDosComplexos)<<"i"<<endl;
	
	complex<float>multiplicacaoDosComplexos = multiplicacaoComplexos(complexo1, complexo2);
	
	cout<<"Multiplicação: ("<<real1<<"+"<<img1<<"i)*("<<real2<<"+"<<img2<<"i)="
	<<real(multiplicacaoDosComplexos)<<"+"<<imag(multiplicacaoDosComplexos)<<"i";
	
	return 0;
}
