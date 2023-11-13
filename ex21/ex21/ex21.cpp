// ex21.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
// A série de Fibonacci é formada pela seqüência: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ..., etc. Escreva um
// algoritmo que gere a série de Fibonacci até o vigésimo termo.


#include <iostream>

int main()
{
    int fibonacciFirstNumber = 1;
    int fibonacciSecondNumber = 0;
    int sum = 0;

    for (int i = 0; i < 20; i++) {
        sum= fibonacciFirstNumber + fibonacciSecondNumber;
        fibonacciSecondNumber = sum;
        printf("%d, ", fibonacciFirstNumber);
        fibonacciSecondNumber = fibonacciFirstNumber;
        fibonacciFirstNumber = sum;
    }
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
