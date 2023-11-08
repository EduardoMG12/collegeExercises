// ex06.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.,
// 
// Ler dois valores inteiros (variáveis A e B) e apresentar a adição destes valores, quando a variável
// A for maior que B, caso contrário, efetuar a multiplicação das variáveis.


#include <iostream>
#include <cstdio>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int A, B;
    printf("digite um valor para a letra A: ");
    scanf_s("%d", &A);
    printf("digite um valor para a letra B: ");
    scanf_s("%d", &B);

    if (A > B) {
        printf("a adicao:  %d", A - B);
    }
    else {
        printf("o valor da multiplicacao:  %d", A * B);
    }
    return 0;
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
