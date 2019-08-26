#include <stdio.h>

void verificar_nulo(float num) {
    if (num) {
        printf("Nao Nulo");
    } else {
        printf("Nulo \n");
    }
}

void main() {
    float num;
    printf("Digite um valor: ");
    scanf("%f",&num);

    verificar_nulo(num);
}
