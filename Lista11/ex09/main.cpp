#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Estudante{
	string nome;
	int idade;
	float media;
	
	void registrarEstudante(){
		cout<<"Digite o nome: "<<endl;
		getline(cin >> ws, nome);
		cout<<"Digite a idade: "<<endl;
		cin>>idade;
		cout<<"Digite a média: "<<endl;
		cin>>media;
	}
};


int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	Estudante estudantes[3], maiorMedia;
	maiorMedia.media = -9999;
	
	for(int i = 0; i < 3; i++){
		cout<<i+1<<"° estudante: "<<endl;
		estudantes[i].registrarEstudante();
		if (estudantes[i].media > maiorMedia.media){
			maiorMedia = estudantes[i];
		}
	}
	
	cout<<"Estudante com maior média: "<<endl;
	cout<<"Nome: "<<maiorMedia.nome<<endl;
	cout<<"Idade: "<<maiorMedia.idade<<endl;
	cout<<"Média: "<<maiorMedia.media<<endl;
	
	return 0;
}
