#include <iostream>

int main() {
        //  Efetuar a leitura de um valor inteiro positivo ou negativo e apresentar o n�mero lido como sendo um valor positivo, ou seja, o programa dever� apresentar o m�dulo de um n�mero fornecido. Lembre-se de verificar se o n�mero fornecido � menor que zero, sendo multiplique-o por �1.
    int numero;

    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        numero = -numero;
    }

    printf("O modulo do numero lido: %d\n", numero);

    return 0;
}
