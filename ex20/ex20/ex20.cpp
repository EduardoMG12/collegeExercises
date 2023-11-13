// ex20.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
// Fulano realizou um empréstimo bancário de R$ 10.000,00 que deverão ser pagos em 24 meses
// com juros de 2 % ao mês, incluídos já na primeira parcela.Determine e apresente o valor da última
// parcela e o montante pago ao final do empréstimo.

#include <iostream>

int main()
{
	float loanFulano = 10000.00;
	float debitBalance = 10000.00;

	float debitBalancePaid = 0.0;
	int monthPayment = 24;
	float interest= 0.02;
	float loanPaid = 0.0;

	for (int i = 1; i <= 24; i++) {
		printf("mes: %d\n", i);
		debitBalancePaid -= 416.66; // parcela paga s/juros;
		loanPaid += (loanFulano * interest); // juros pagos;
		debitBalance -= debitBalance * interest - 416.66; // saldo devedor atualizado;
		printf(" valor pago ate agora de juros= %.2f\n", loanPaid);
		printf(" valor do salo devedor pago ate agora= %.2f", debitBalance);
		printf(" saldo devedor= %.2f\n", debitBalance);
	}


	//for (int i = 1; i <= 24; i++) {
		//printf("mes: %d\n", i);
		//loanPaid += (debitBalance * interest);
		//debitBalance -= debitBalance * interest;
		//printf(" valor pago até agora= %f\n", loanPaid);
		//printf(" saldo devedor= %f\n", debitBalance);
	//}



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
