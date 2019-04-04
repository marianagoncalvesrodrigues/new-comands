

#include <stdio.h>
#include <stdlib.h>




int n=1;
int n2=0;

int main(int argc, char** argv) {
    
    printf("digite um numero para calcular a sequencia de seus quadrados até zero: \n");
    scanf("%i", &n);

    while (n>=1){
        n2 = n * n;
        printf("o quadrado de %i é: %i\n", n, n2);
        n--;
    }

    return (EXIT_SUCCESS);
}

