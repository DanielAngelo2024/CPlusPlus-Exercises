// Ex01.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std;

/*
    Média das Alturas (Alocação Básica)
    Enunciado: Crie um programa que aloque dinamicamente
    memória para armazenar a altura de 10 pessoas. Solicite
    ao usuário que insira as alturas, calcule a média e exiba o
    resultado. Libere a memória alocada ao final.
    Detalhes: Usar new e delete para alocação e desalocação
*/

void registraAlturas(float alturas[]);
float somaAlturas(float alturas[]);
float mediaAlturas(float alturas[], float somaAlturas);

int main()
{
    setlocale(LC_ALL, "pt-BR.UTF-8");

    float* alturas = new float[10];

    registraAlturas(alturas);
    mediaAlturas(alturas, somaAlturas(alturas));

    delete[] alturas;
    alturas = nullptr;

}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

void registraAlturas(float alturas[]) {
    for (int i = 0; i < 10; i++)
    {
        cout << "Digite a " << i + 1 << "° altura:" << endl;
        cin >> alturas[i];
    }
}

float somaAlturas(float alturas[]) {
    float soma;
    soma = 0;

    for (int i = 0; i < 10; i++)
    {
        soma += alturas[i];
    }
    return soma;
    
}
float mediaAlturas(float alturas[], float somaAlturas) {
    float media = somaAlturas / 10;
    return media;
}

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
