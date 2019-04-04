


#include <stdio.h>
#include <stdlib.h>



int numero=0;
int opcao=0;

int main(int argc, char** argv) {
    printf("digite um numero inteiro:\n");
    scanf("%i", &numero);
    printf("escolha a opçao 1 para saber se o numero é par ou impar, ou escolha a opçao 2 para saber se é maior ou menor de idade:\n");
    scanf("%i", &opcao);
    getchar();
    system("clear");
    
    switch (opcao){
        case 1:
                if (numero%2==0){
                printf("este numero é par");
            }
                if (numero%2>0){
                printf("este numero é impar");
            } 
            break;
        case 2:
                if (numero>=18){
                printf("%i é maior de idade", numero);
            } 
                if (numero<18){
                printf("%i é menor de idade", numero);
            }
            break;    
        default:
                printf("Opcao diferente de a , b ou c .... \n");
            break;    
            
    }
    return (EXIT_SUCCESS);
}

