/*
Faça um programa que armazene o nome
e salário de 5 empregados. Em seguida
calcule um aumento de 8% nos salários e
exiba a nova folha de pagamentos.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void limpar_buffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

int main(int argc, char** argv) {
    char n[5][21];
    double s[5];
    for(int i=0; i<5; i++){
        printf("nome: \n");
        fgets(n[i], sizeof n[i], stdin);
        n[i][strcspn(n[i],"\n")]= '\0';
        printf("digite o salaio:\n");
        scanf("%lf", &s[i]);
        s[i]= s[i] + s[i]*(8.0/100);
        limpar_buffer();//tirar o enter pq o char entende como char
        
    }
    
    for(int i=0; i<5; i++){
        printf("%s com reajuste de 8 por cento no salario %.2lf\n\n", n[i], s[i]);
    }
    return (EXIT_SUCCESS);
}

