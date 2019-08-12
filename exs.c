#include <stdio.h>

int verificar_numero_primo(int num) {
    int cont = 0;
    for(int i = num; i != 0; i--) {
        if(num % i == 0) {
            cont++;
        }
    }
    if(cont == 2) {
        return 1;
    } else {
        return 0;
    }
}

int fibonacci(int num) {
    if(num == 1 || num == 0) {
        return 1;
    } else {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int fatorial(int num) {
    if(num == 1) {
        return 1;
    } else {
        return num * fatorial(num - 1);
    }
}

int maior_menor() {
    int num, maior, menor;

    for(int i = 0; i <= 20; i++) {
        printf("%d: ", i);
        scanf("%d", &num);

        if(!i) {
            maior = num;
            menor = num;
        } else {
            if(maior < num) {
                maior = num;
            }
            if(menor > num) {
                menor = num;
            }
        }

    }
    printf("Maior: %d \n", maior);
    printf("Menor: %d", menor);
}

void main() {
    fatorial()
    verificar_numero_primo();
    maior_menor()
    fibonacci()
}
