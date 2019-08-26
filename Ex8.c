#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int dado(int max) {
    return floor(rand() % (max + 1));
}

void main() {
    srand(time(NULL));
    printf("Numero Sorteado: %d", dado(6));
}
