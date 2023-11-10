// ex19.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
// Fulano aplicou R$ 100,00 com rendimento de 5% ao mês. Quantos meses serão necessários para o
// capital investido ultrapasse a R$ 200, 00.


#include <iostream>

int main()
{
    float aport = 100.0;
    int month = 1;

    while(aport<200){
      printf("mes: %d\n %.2f * 5% = %.2f\n", month, aport, aport * 1.05);
        aport *= 1.05;
        if (aport < 200) month++;

    }
    printf("mes: %d", month);

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
