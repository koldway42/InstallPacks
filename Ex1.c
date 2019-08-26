#include <stdio.h>

void verificar_positivo(float num) {
    if (num >= 0) {
        printf("Positivo \n");
    } else {
        printf("Negativo \n");
    }
}

void main() {
    float num;
    printf("Digite um valor: ");
    scanf("%f",&num);

    verificar_positivo(num);
}
