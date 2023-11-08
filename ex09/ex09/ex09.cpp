// ex09.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
// Efetuar a leitura de três números inteiros e apresentar o maior valor

#include <iostream>
#include<cstdio>

int main()
{
    int number[3];

    for (int i = 0; i < 3; i++) {
        printf("digite um valor para a variavel %d: ", i+1);
        scanf_s("%d", &number[i]);
    }
    
    if (number[0] > number[1] && number[0] > number[2]) {
        printf("Os numeros sao: %d, %d, %d \n O maior valpor e: %d", number[0], number[1], number[2], number[0]);
    }
    else if (number[1] > number[0] && number[1] > number[2]) {
        printf("Os numeros sao: %d, %d, %d \n O maior valpor e: %d", number[0], number[1], number[2], number[1]);
    }
    else printf("Os numeros sao: %d, %d, %d \n  O maior valpor e: %d", number[0], number[1], number[2], number[2]);


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
