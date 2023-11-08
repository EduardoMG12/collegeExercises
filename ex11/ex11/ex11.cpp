// ex11.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
// 
// Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule
// seu peso ideal, utilizando as seguintes fórmulas :
// para homens : (72.7 * h) - 58;
// para mulheres : (62.1 * h) - 44.7.

#include <iostream>
#include<cstdio>

int main()
{
    float height;
    char gender;

    printf("Digite sua altura: ");
    scanf_s("%f", &height);


    printf("Digite seu sexo (M/F): ");
    scanf_s(" %c", &gender);

    if (gender != 'M' && gender != 'm' && gender != 'F' && gender != 'f') {
        printf("genero '%c' invalido!!!", gender);
        return 1;
    }
    else if (gender == 'm' || gender == 'M') {
        float weight = (72.7 * height) - 58;
        printf("Seu peso ideal: %.2f", weight);
    }
    else {
        float weight = (62.1 * height) - 44.7;
        printf("Seu peso ideal: %.2f", weight);
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
