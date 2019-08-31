#include <stdio.h>

int num_perfeito() {
    int acc = 0;
    for(int num = 1; num <= 1000; num++){
        for(int i = 1; i < num; i++) {
            if(num % i == 0) {
                acc += i;
                if(acc == num) {
                    printf("%d \n", num);
                    acc = 0;
                }
            }
        }
        acc = 0;
    }
}

void main() {
    printf("Numeros perfeitos de 1 - 1000: \n");
    num_perfeito();
}
