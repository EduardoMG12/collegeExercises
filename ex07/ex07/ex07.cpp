// ex07.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
// Ler um valor inteiro que representa o mês de uma data e apresentar o trimestre correspondente. 

#include <iostream>
#include<cstdio>


int main()
{
    int month;
    printf("Digite um mes valido: ");
    scanf_s("%d", &month);

    if (month <= 3) {
        printf("primeiro trimestre");
    }
    else if (month <= 6) {
        printf("segundo trimestre");
    }
    else if (month <= 9) {
        printf("terceiro trimestre");
    }
    else if (month <= 12) {
        printf("quarto trimestre");
    }
    else printf("mes invalido!!!");
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
