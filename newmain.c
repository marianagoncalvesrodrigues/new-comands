
//EXERCÍCIO 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double salario_min = 880;
double salario_recebido=0;
double horas_extras=0;
int main(int argc, char** argv) {
    printf("digite as horas extras trabalhadas para saber seu salario: \n");
    scanf("%lf", &horas_extras);
    salario_recebido = 880 + ((5 * horas_extras) * 0.5);
    getchar();
    system("clear");
    printf("O salario a ser recebido é de %.2lf para %.2lf horas extras trabalhadas.\n", salario_recebido, horas_extras);
    
    return (EXIT_SUCCESS);
}

