// ex31.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
// Crie um programa com uma função que troque os valores de duas variáveis inteiras, digamos A e B.


#include <iostream>

void switchValues(int *firstValue, int *secondValue) {
    int temp = *firstValue;
    *firstValue = *secondValue;
    *secondValue = temp;
}

int main()
{
    int value1, value2;


    printf("Digite o primeiro valor: ");
    scanf_s("%d", &value1);

    printf("\nDigite o segundo valor: ");
    scanf_s("%d", &value2);

    printf("\nValores antes de trocar: %d, %d", value1, value2);

    switchValues(&value1, &value2);

    printf("\nOs valores trocados: %d, %d", value1, value2);

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
