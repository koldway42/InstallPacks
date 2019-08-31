#include <stdio.h>

int verificar_maior(int num1, int num2) {
    if(num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int mdc(int num1, int num2) {
    int maior = verificar_maior(num1, num2);

    if(maior % num1 == 0 && maior % num2 == 0) {
        return maior;
    } else {
        return num1 * num2;
    }
}

void main() {

    int num1;
    int num2;

    printf("Digite dois valores: \n");
    printf("1: ");
    scanf("%d", &num1);

    printf("2: ");
    scanf("%d", &num2);

    printf("MDC = %d", mdc(num1, num2));


}
