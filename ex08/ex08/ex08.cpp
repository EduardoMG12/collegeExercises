// ex08.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
// Construa um algoritmo que leia três valores inteiros e os coloque em ordem crescente. 


#include <iostream>
#include <cstdio>


int main()
{
    int firstValue, secondValue, thirdValue, firstNumber, secondNumber, thirdNumber;
    printf("Digite o primeiro valor: ");
    scanf_s("%d", &firstValue);
    printf("Digite o segundo valor: ");
    scanf_s("%d", &secondValue);
    printf("Digite o terceiro valor: ");
    scanf_s("%d", &thirdValue);

    if (firstValue< secondValue && firstValue< thirdValue) {
        firstNumber = firstValue;
        if (secondValue < thirdValue) {
            secondNumber = secondValue;
            thirdNumber = thirdValue;
        }
        else {
            secondNumber = thirdValue;
            thirdNumber = secondValue;
        }
    }else if (secondValue < firstValue && secondValue < thirdValue) {
        firstNumber = secondValue;
        if (firstValue < thirdValue) {
            secondNumber = firstValue;
            thirdNumber = thirdValue;
        }
        else {
            secondNumber = thirdValue;
            thirdNumber = firstValue;
        }
    }else{

        firstNumber = thirdValue;
        if (firstValue < secondValue) {
            secondNumber = firstValue;
            thirdNumber = secondValue;
        }
        else {
            secondNumber = secondValue;
            thirdNumber = firstValue;
        }
    }

    printf("estes numeros %d, %d, %d \nem ordem crecente ficariam: %d , %d , %d", firstValue, secondValue, thirdValue, firstNumber, secondNumber, thirdNumber);
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
