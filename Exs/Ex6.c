#include <stdio.h>

int verificar_maior(int num1, int num2, int num3) {
    if(num1 > num2 && num1 > num3) {
        return num1;
    } else if(num2 > num1 && num2 > num3){
        return num2;
    } else {
        return num3;
    }
}

void main() {
    int num1;
    int num2;
    int num3;

    printf("Digite tres numeros \n");
    printf("1: ");
    scanf("%d", &num1);

    printf("2: ");
    scanf("%d", &num2);


    printf("3: ");
    scanf("%d", &num3);

    printf("O maior valor digitado foi: %d", verificar_maior(num1, num2, num3));
}
