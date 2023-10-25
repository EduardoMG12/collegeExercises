#include <iostream>

int main() {
    // Dado um n�mero inteiro de 3 algarismos, inverter a ordem de seus algarismos. Os tr�s algarismos do n�mero dado s�o diferentes de zero. Utilize os operadores / e %.

    int numero, centenas, dezenas, unidades;

    printf("Digite um numero inteiro de 3 algarismos (diferentes de zero): ");
    scanf("%d", &numero);

    centenas = numero / 100;
    dezenas = (numero / 10) % 10;
    unidades = numero % 10;

    int numeroInvertido = unidades * 100 + dezenas * 10 + centenas;

    printf("Numero invertido: %d\n", numeroInvertido);

    return 0;
}
