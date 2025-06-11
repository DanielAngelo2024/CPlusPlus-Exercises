#include <iostream>

using namespace std;

/*
1-Criar uma lista encadeada para armazenar inteiros.
2-Insirir os valores 10, 20 e 30 no final da lista.
3-Remover o valor 20.
4-Exibir a lista resultante
*/

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct NodeNum{
	int value1;
	NodeNum* next;
};

void addInFinal(NodeNum*& head, int value){
	NodeNum* newNum = new NodeNum{value, nullptr};
	
	if(head == nullptr){
		head = newNum;
		return;
	}
	
	NodeNum* temp = head;
	while(temp->next != nullptr){
		temp = temp->next;
	}
	temp->next = newNum;
}

void removeElement(NodeNum*& head, int value){
	if(head == nullptr) return;
	
	if(head->value1 == value){
		NodeNum* temp = head;
		head = head->next;
		delete temp;
		cout << "Valor " << value << " removido da lista" << endl;
		return;
	}
	
	NodeNum* atual = head;
	while(atual->next != nullptr && atual->next->value1 != value){
		atual = atual->next;
	}
	
	if(atual->next != nullptr){
		NodeNum* temp = atual->next;
		atual->next = temp->next;
		delete temp;
		cout << value << " removido da lista." << endl;
	}else{
		cout << value << " não encontrado na lista." << endl;
	}
}

void viewList(NodeNum* head){
	while(head != nullptr){
		cout << head->value1 << endl;
		head = head->next;
	}
}


int main(int argc, char** argv) {
	
	NodeNum* listNum = nullptr;
	
	addInFinal(listNum, 10);
	addInFinal(listNum, 20);
	addInFinal(listNum, 30);
	
	removeElement(listNum, 20);
	viewList(listNum);
	
	return 0;
}
