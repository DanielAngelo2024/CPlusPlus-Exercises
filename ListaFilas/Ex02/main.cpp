#include <iostream>
#include <queue>

using namespace std;

/*
Ler 3 nomes de arquivos do usuário.
Insira cada nome em uma fila.
Mostre a quantidade de documentos na fila.
Imprima o primeiro (removendo da fila) e mostre o
próximo.
*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	queue<string> filaArquivos;
	string nomeArquivo;
	
	for(int i = 0; i < 3; i++)
	{
		cout << "Digite o nome do " << i + 1 << "° arquivo:" << endl;
		cin >> nomeArquivo;
		filaArquivos.push(nomeArquivo);
		cout << endl << "Total na fila: " << filaArquivos.size() << endl << endl;
	}
	
	cout<<"<--------------------------------------------------------------------------------------------------------------------->" << endl;
	
	while(!filaArquivos.empty())
	{
		cout << endl << "Imprimindo arquivo:  " << filaArquivos.front() << "..." << endl << endl;
		system("pause");
		filaArquivos.pop();
		cout << endl << "Arquivo impresso." << endl << endl;
		system("pause");
	}
	
	cout << endl << "Fila terminada, programa encerrado.";
	
	return 0;
}
