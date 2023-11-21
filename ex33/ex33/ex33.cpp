// ex33.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
// Escreva uma função minmax que receba um vetor inteiro v[0..n-1] e os endereços de duas
// variáveis inteiras, digamos min e max.Deposite nessas variáveis o valor de um elemento mínimo
// e o valor do elemento máximo do vetor.Escreva também uma função main que crie o vetor de
// inteiros e use a função minmax.

#include <stdio.h>

void minmax(int v[], int n, int* min, int* max) {
    if (n <= 0) {
        *min = *max = 0;
        return;
    }

    *min = *max = v[0];

    for (int i = 1; i < n; i++) {
        if (v[i] < *min) {
            *min = v[i];
        }
        else if (v[i] > *max) {
            *max = v[i];
        }
    }
}

int main() {
    int v[] = { 5, 3, 9, 1, 7 };
    int size = sizeof(v) / sizeof(v[0]);

    int min, max;

    minmax(v, size, &min, &max);

    printf("Elemento minimo: %d\n", min);
    printf("Elemento maximo: %d\n", max);

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
