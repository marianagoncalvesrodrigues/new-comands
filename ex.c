

#include <stdio.h>
#include <stdlib.h>

int numero=1;


int main(int argc, char** argv) {
    while (numero<=500) {
        if(numero%5==0){
            printf("valor do numero é: %i \n", numero);
        }
        numero++;
    }
 


    return (EXIT_SUCCESS);
}

