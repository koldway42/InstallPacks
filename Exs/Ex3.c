#include <stdio.h>
#include <math.h>

void bascara(int a, int b, int c) {
    float raiz = (b * b) - (4 * a * c);

    if(raiz >= 0) {
        float x1 = ((-b) + sqrt(raiz)) / (a * 2);
        float x2 = ((-b) - sqrt(raiz)) / (a * 2);
        printf("x1 = %f \n", x1);
        printf("x2 = %f \n", x2);
    } else {
        printf("Raizes invalidas");
    }
}

void main() {
    int a, b, c;
    printf("Digite os valores da equacao de segundo grau \n");
    printf("A: ");
    scanf("%d",&a);

    printf("B: ");
    scanf("%d",&b);

    printf("C: ");
    scanf("%d",&c);

    bascara(a, b, c);
}
