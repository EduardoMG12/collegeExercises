// ex22.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
// Ler um número inteiro e determinar se ele é primo. Obs. um número é primo quando for divisível
// somente por 1 e por ele mesmo

#include <stdio.h>

int main() {
    int number;

    printf("Digite um numero para verificar se e primo: ");
    scanf_s("%d", &number);

    if (number <= 1) {
        printf("%d nao e um numero primo.\n", number);
    }
    else {
        int isPrime = 1; // 1 significa primo, 0 significa não primo

        for (int i = 2; i * i <= number; ++i) {
            if (number % i == 0) {
                isPrime = 0;
                printf("%d nao e um numero primo.\n", number);
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d e um numero primo.\n", number);
        }
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
