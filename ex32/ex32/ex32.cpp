// ex32.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
// Escreva um programa com uma função hm que converta minutos em horas-e-minutos. A função
// recebe um inteiro mnts e os endereços de duas variáveis inteiras, digamos h e m, e atribui valores
// a essas variáveis de modo que m seja menor que 60 e que 60 * h + m seja igual a mnts.Escreva
// também uma função main que use a função hm.


#include <iostream>

 void convertMinutesAtHours(int *minutes, int *hours) {
     int methodHours = 0;
     int methodMinutes = *minutes;

     while (methodMinutes >= 60) {

         methodMinutes -= 60;
         methodHours += 1;

     }

     *hours = methodHours;
     *minutes = methodMinutes;

 }

int main()
{
    int hours, minutes;

    printf("Digite os minutos para converter em horas: ", minutes);
    scanf_s("%d", &minutes);


    convertMinutesAtHours(&minutes, &hours);

    printf("horas: %d, minutos: %d", hours, minutes);
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
