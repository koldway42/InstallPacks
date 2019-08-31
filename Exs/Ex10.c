#include <stdio.h>

float toFarenheit(float c) {
    return ((9 * c) / 5) + 32;
}

float toCelcius(float f) {
    return (5 * (f - 32)) / 9;
}

void main() {
    int option, temp;

    printf("Digite a temperatura a ser convertida: ");
    scanf("%d", &temp);

    printf("Digite a opcao: \n");
    printf("-------------------------------------------------------- \n");
    printf("1 = Celsius \n");
    printf("2 = Farenheit \n");
    printf("-------------------------------------------------------- \n");
    scanf("%d", &option);

    switch(option) {
        case 1:
            printf("C = %.2f \n", toCelcius(temp));
            break;
        case 2:
            printf("F = %.2f \n", toFarenheit(temp));
            break;
        default:
            printf("Opcao invalida. \n");
    }

}
