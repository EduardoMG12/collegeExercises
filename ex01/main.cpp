#include <cstdio>

int main() {
    //Ler dois valores inteiros (vari�veis A e B) e efetuar as opera��es de adi��o, subtra��o, multiplica��o e divis�o de A por B, apresentando ao final os quatro resultados obtidos.

    int A, B;
    int soma, diferenca, produto;
    double divisao;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    soma = A + B;
    diferenca = A - B;
    produto = A * B;
    if (B != 0) {
        divisao = static_cast<double>(A) / B;
    } else {
        fprintf(stderr, "Erro: divis�o por zero!\n");
        return 1;
    }

    printf("Resultado da adicao: %d\n", soma);
    printf("Resultado da subtracao: %d\n", diferenca);
    printf("Resultado da multiplicacao: %d\n", produto);
    printf("Resultado da divisao: %lf\n", divisao);

    return 0;
}
