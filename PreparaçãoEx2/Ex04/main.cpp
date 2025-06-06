#include <iostream>
#include <stack>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int numero, resto, quociente;
	stack<int> pilhaBinario;
	
	cout<<"Digite um número:"<<endl;
	cin>>numero;
	
	quociente=numero;
	
	while(quociente > 0){
		resto = quociente % 2;
		quociente /= 2;
		pilhaBinario.push(resto);
	}
	
	cout<<numero<<" em binário: ";
	while(!pilhaBinario.empty()){
		cout<<pilhaBinario.top();
		pilhaBinario.pop();
	}
	
	
	return 0;
}
