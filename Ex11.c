#include <stdio.h>

float verificar_maior(float num1, float num2, float num3) {
    if(num1 > num2 && num1 > num3) {
        return num1;
    } else if(num2 > num1 && num2 > num3){
        return num2;
    } else {
        return num3;
    }
}

float verificar_menor(float num1, float num2, float num3) {
    if(num1 < num2 && num1 < num3) {
        return num1;
    } else if(num2 < num1 && num2 < num3){
        return num2;
    } else {
        return num3;
    }
}

void calcular_media(float nota1, float nota2, float nota3) {
    float acc = 0;

    float maior = verificar_maior(nota1, nota2, nota3);
    float menor = verificar_menor(nota1, nota2, nota3);

    if(menor != nota1) {
        acc += nota1;
    }
    if(menor != nota2) {
        acc += nota2;
    }
    if(menor != nota3) {
        acc += nota3;
    }

    float media = acc / 2;

    printf("Maior = %.2f \n", maior);
    printf("Menor = %.2f \n", menor);
    printf("Media = %.2f \n", media);

}

void main() {
    float nota1, nota2, nota3;

    printf("Digite as notas: \n");
    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    printf("Nota 3: ");
    scanf("%f", &nota3);

    calcular_media(nota1, nota2, nota3);
}
