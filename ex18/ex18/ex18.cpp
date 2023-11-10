// ex18.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
// Fulano tem 1,50 metro e cresce 2 centímetros por ano, enquanto Ciclano tem 1,10 metro e cresce 3
// centímetros por ano.Construa um algoritmo que calcule e imprima quantos anos serão necessários
// para que Ciclano seja maior que Fulano.


#include <iostream>

int main()
{
	int year = 1;
	float fulano = 1.5;
	float ciclano = 1.1;

	while (fulano > ciclano) {
		fulano += 0.02;
		ciclano += 0.03;
		printf("ano %d\n altura:\n  fulano: %2f;\n  ciclano:%2f;\n", year, fulano, ciclano);
		if(fulano > ciclano) year++;
	}
	printf("resposta: %d anos", year);
	
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
