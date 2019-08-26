#include <stdio.h>

int num_perfeito(int num) {
    int acc = 0;
    for(int i = 0; i < num; i++) {
        if(num % i == 0) {
            acc += i;
        }
    }

    if(acc == num) {
        return 1;
    } else {
        return 0;
    }
}

void main() {
    int num;
    printf("Digite o numero a ser verificado como perfeito \n");
    scanf("%d", &num);

    num_perfeito(num) ? printf("Numero Perfeito.") : printf("Numero nao Perfeito.");
}
