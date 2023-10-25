#include <iostream>

int main() {
        //  Efetuar a leitura de um valor inteiro positivo ou negativo e apresentar o número lido como sendo um valor positivo, ou seja, o programa deverá apresentar o módulo de um número fornecido. Lembre-se de verificar se o número fornecido é menor que zero, sendo multiplique-o por –1.
    int numero;

    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        numero = -numero;
    }

    printf("O modulo do numero lido: %d\n", numero);

    return 0;
}
