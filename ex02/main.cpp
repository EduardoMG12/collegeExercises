#include <iostream>

int main() {
    // Ler dois valores para as variáveis A e B, efetuar a troca dos valores de forma que a variável A passe a possuir o valor da variável B e que a variável B passe a possuir o valor da variável A. Apresentar os valores trocados.

    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    A = A + B;
    B = A - B;
    A = A - B;

    printf("Valores trocados: A = %d, B = %d\n", A, B);

    return 0;
}
