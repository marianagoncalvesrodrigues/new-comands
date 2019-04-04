

#include <stdio.h>
#include <stdlib.h>

int numero=5;

int main(int argc, char** argv) {
    while (numero>=5 && numero<=70){
        if(numero%2>0.0){
        printf("o numero ímpar é: %i\n", numero);
        }
        numero++;
    }

    return (EXIT_SUCCESS);
}

