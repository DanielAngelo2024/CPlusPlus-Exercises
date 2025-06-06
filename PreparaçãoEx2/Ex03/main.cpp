#include <iostream>
#include <stack>
#include <string>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	stack<char> pilhaPalavra;
	string palavra, palavraInvertida;
	
	cout<<"Digite uma palavra:"<<endl;
	cin>>palavra;
	
	for(int i = 0; i < palavra.size(); i++){
		pilhaPalavra.push(palavra[i]);
	}

	while(!pilhaPalavra.empty()){
		palavraInvertida += pilhaPalavra.top();
		pilhaPalavra.pop();
	}
	
	if(palavra == palavraInvertida){
		cout<<"É palíndromo";
	}else{
		cout<<"Não é palíndromo";
	}
	
	return 0;
}
