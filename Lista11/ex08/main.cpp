#include <iostream>
#include <locale.h>

using namespace std;

struct Livro{
	string titulo, autor;
	double preco;
	
	void registarLivro(){
		cout<<"Digite o título do livro: "<<endl;
		getline(cin >> ws, titulo);
		cout<<"Digite o autor do livro:"<<endl;
		getline(cin >> ws, autor);
		cout<<"Digite o preço do livro:"<<endl;
		cin>>preco;
	}
	
};


int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	Livro livros[3], livroMaiorPreco;
	livroMaiorPreco.preco = -9999;
	for(int i=0; i<3; i++){
		livros[i].registarLivro();
		
		if(livros[i].preco > livroMaiorPreco.preco){
			livroMaiorPreco = livros[i];
		}
	}
	
	cout<<"Livro com maior preço: "<<endl;
	cout<<"Título: "<<livroMaiorPreco.titulo<<endl;
	cout<<"Autor: "<<livroMaiorPreco.autor<<endl;
	cout<<"Preço: "<<livroMaiorPreco.preco<<endl;
	
	return 0;
}
