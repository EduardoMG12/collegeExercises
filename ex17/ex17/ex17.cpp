// ex17.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
// A conversão de graus Fahrenheit para centígrados é obtida pela fórmula C=5/9(F-32). Escreva um
// algoritmo que calcule e escreva uma tabela de graus centígrados em função de graus Fahrenheit
// que variem de 50 a 150 de 1 em 1.

#include <iostream>

int main()
{
    printf(" F = C * 9 / 5) + 32\n");
    for (int i = 50; i < 151; i++) {
        printf(" F = (%d * 9 / 5) + 32 = %d\n", i, (i*9/5)+32);


    }



    std::cout << "Hello World!\n";
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
