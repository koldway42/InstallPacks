#include <stdio.h>

int verificar_numero_primo(int num) {
    int cont = 0;
    for(int i = num; i != 0; i--) {
        if(num % i == 0) {
            cont++;
        }
    }
    if(cont == 2) {
        return num;
    }
}

void main() {
    for(int i = 0; i < 1000; i++) {

        int num = verificar_numero_primo(i);

        num ? printf("%d \n", num) : num;
    }
}
