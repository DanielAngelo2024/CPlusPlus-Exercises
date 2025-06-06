#include <iostream>
#include <queue>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	
	queue<string> filaMusicas;
	string musica;
	char op;
	int menuOp;
	
	do{
		cout << "1 - Adicionar Musica, 2 - Tocar musica, 3 - Mostrar próxima musica "<<endl;
		cin>>menuOp;
		
		switch (menuOp){
			case 1:
			cout<<"Adicione a música: "<<endl;
			cin>>musica;
			filaMusicas.push(musica);
			break;
			case 2:
				if (filaMusicas.size() == 0){
					cout<<"Sem musicas adicionadas"<<endl;
				}else{
					cout << "Tocando " << filaMusicas.front()<<endl;
					filaMusicas.pop();
				}
			break;
			case 3:
				if(filaMusicas.size() == 0){
					cout<<"Sem musicas adicionadas"<<endl;
				}else{
					cout<<"Próxima música: "<<filaMusicas.front()<<endl;
				}
			break;
		}
				
		cout<<"Deseja continuar utilizando o programa? "<<endl;
		cin>>op;
	}while(op == 's');
	
	
	return 0;
}
