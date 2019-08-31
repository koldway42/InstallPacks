#include <stdio.h>

int verificar_menor(int num1, int num2) {
    if(num1 < num2) {
        return num1;
    } else {
        return num2;
    }
}

void main() {
    int num1;
    int num2;

    printf("Digite dois numeros \n");
    printf("1: ");
    scanf("%d", &num1);

    printf("2: ");
    scanf("%d", &num2);

    printf("O menor valor digitado foi: %d", verificar_menor(num1, num2));
}
