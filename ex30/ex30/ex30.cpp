// ex30.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
// Crie uma estrutura chamada DisciplinaCursada que armazena informações sobre um aluno e uma
// disciplina, incluindo um aluno, uma disciplina, o ano e o semestre em que cursou a disciplina e
// três notas da disciplina.


#include <iostream>

int main()
{
	struct Student {
		char name[120];
		int yearBirthday;
	};

	struct Discipline {
		char name[50];
		int firstExamScore;
		int SecondExamScore;
		int thirdExamScore;
		int yearCoursed;
		int semesterCoursed;

	};

	struct CourseTaken {
		Student studentProfile;
		Discipline diciplineCoursed[10];
	
  };

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
