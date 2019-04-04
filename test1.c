
#include <stdio.h>
#include <stdlib.h>

int N = 0;
int fat = 1;

int main(int argc, char** argv) {
    do {
        printf("digite um numero:\n");
        scanf("%i", &N);
    }while(N<0);

    while (N > 1) {
        fat = fat * N;
        N--;
    }
    printf("o fatorial é %i", fat);



    return (EXIT_SUCCESS);
}

