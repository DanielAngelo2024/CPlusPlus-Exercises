#include <iostream>
#include <queue>

using namespace std;
/*
Um consult�rio m�dico quer organizar o atendimento dos
pacientes pela ordem de chegada. Implemente um
programa em C++ que:
1. Adicione tr�s pacientes: "Jo�o", "Maria" e "Carlos".
2. Mostre o pr�ximo a ser atendido.
3. Remova o primeiro paciente (foi atendido).
4. Mostre o novo pr�ximo paciente

*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	queue<string> filaPacientes;
	char atender;
	
	filaPacientes.push("Jo�o");
	filaPacientes.push("Maria");
	filaPacientes.push("Carlos");
	
	while(!filaPacientes.empty())
	{
		cout << "Pr�ximo paciente: " << filaPacientes.front() << endl;
		system("pause");
		filaPacientes.pop();
		cout << "Paciente atendido!" << endl << endl;
	}
	
	return 0;
}
