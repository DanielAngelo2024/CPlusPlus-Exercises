#include <iostream>
#include <locale.h>

using namespace std;

struct Retangulo{
	int largura, altura;
	
	int area(int largura, int altura){
		return largura * altura;
	}
	
	int perimetro(int largura, int altura){
		return largura + largura + altura + altura;
	}
	
	void calcularArea(){
		cout<<"Digite a largura do retangulo: "<<endl;
		cin>>largura;
		cout<<"Digite a altura do retangulo: "<<endl;
		cin>>altura;
		cout<<"A área do retangulo é: "<<area(largura, altura)<<endl;
		cout<<"O perímetro é: "<<perimetro(largura, altura);  
	}
	
};

int main(int argc, char** argv) {
	setlocale(LC_ALL,"");
	
	Retangulo retangulo;
	
	retangulo.calcularArea();
	
	return 0;
}
