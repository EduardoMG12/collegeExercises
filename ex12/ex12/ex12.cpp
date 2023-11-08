// ex12.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
// Elabore um programa que, dada a idade de um nadador, classifique-o em uma das seguintes
// categorias:
// infantil A = 5 - 7 anos
// infantil B = 8 - 10 anos
// juvenil A = 11 - 13 anos
// juvenil B = 14 - 17 anos


#include <iostream>
#include<cstdio>

int main()
{
	int yearsOld;

	printf("Digite a sua idade para classificar a sua categoria de nadador: ");

	scanf_s("%d", &yearsOld);

	if(yearsOld>= 5 && yearsOld<=7){
		printf("Com a sua idade de %d,\nvoce se enquadra na categoria: Infantil A", yearsOld);
	}
	else if (yearsOld >= 8 && yearsOld <= 10) {
		printf("Com a sua idade de %d,\nvoce se enquadra na categoria: Infantil B", yearsOld);
	}
	else if (yearsOld >= 11 && yearsOld <= 13) {
		printf("Com a sua idade de %d,\nvoce se enquadra na categoria: Juvenil A", yearsOld);
	}
	else if (yearsOld >= 14 && yearsOld <= 17) {
		printf("Com a sua idade de %d,\nvoce se enquadra na categoria: Juvenil B", yearsOld);
	}
	else {
		printf("Com a sua idade de %d,\nNao consegui achar a sua categoria no sistema!!", yearsOld);
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
