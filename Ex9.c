#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int dado(int max) {
    return floor(rand() % (max + 1));
}

void main() {
    srand(time(NULL));
    int num0 = 0;
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    int num5 = 0;
    int num6 = 0;

    for(int i = 1; i <= 1000; i++) {
        int result = dado(6);

        if(result == 6) {
            num6++;
        } else if(result == 5) {
            num5++;
        } else if(result == 4) {
            num4++;
        } else if(result == 3) {
            num3++;
        } else if(result == 2) {
            num2++;
        } else if(result == 1) {
            num1++;
        } else {
            num0++;
        }
    }

    printf("6 = %d \n", num6);
    printf("5 = %d \n", num5);
    printf("4 = %d \n", num4);
    printf("3 = %d \n", num3);
    printf("2 = %d \n", num2);
    printf("1 = %d \n", num1);
    printf("0 = %d \n", num0);
}
