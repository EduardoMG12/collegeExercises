#include <iostream>
//  Ler dois valores numéricos e apresentar a diferença do maior pelo menor. 
using namespace std;

int main()
{
    int value1, value2;

    printf("Digite um numero:");
    scanf("%d", &value1);
    printf("Digite outro numero:");
    scanf("%d", &value2);

   if (value1 > value2) {
        printf("A diferença entre os dois números: %d e %d é %d\n", value1, value2, value1 - value2);
    } else {
        printf("A diferença entre os dois números: %d e %d é %d\n", value2, value1, value2 - value1);
    }
    return 0;
}
