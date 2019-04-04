//Crie um programa que, ao receber três valores reais, tenha uma função 
//AnalisaTriangulo que verificará se esse valores podem ser lados de um 
//triângulo. A função deve retornar 1 se forem lados de um triângulo e 0 caso 
//contrário. Se for um triângulo, a função deve ainda mostrar se o triângulo é 
//equilátero, ou isósceles, ou escaleno, e também, se for triângulo retângulo.
//if (((l2 < l1 + l3)&&(l3 < l1 + l2)&&(l1 < l2 + l3)) && ((l1 == l2) || (l2 == l3) || (l3 == l1))) {
               //printf("triangulo isoceles\n");
           //}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int l1 = 0, l2 = 0, l3 = 0;

int AnalisaTriangulo (int l1, int l2, int l3) {
    
    if((l1<l2+l3) && (l2<l1+l3) && (l3<l2+l1)){
        
    
            if (((pow(l1, 2)) == (pow(l2, 2))+(pow(l3, 2))) || ((pow(l2, 2)) == (pow(l3, 2))+(pow(l1, 2)) || ((pow(l3, 2)) == (pow(l1, 2))+(pow(l2, 2))))){
                   printf("triangulo retangulo\n");
                   
           }

           if ((l1 == l2) && (l2 == l3)) {
               printf("triangulo equilatero\n");
               
           }

           if (((l1 == l2) && (l2!=l3)) || ((l2 == l3) && (l2!=l1)) || ((l3 == l1) && (l3!=l2))) {
               printf("triangulo isoceles\n");
           }

           if (((l2 < l1 + l3) && (l3 < l1 + l2) && (l1 < l2 + l3)) && ((l1 != l2) && (l2 != l3) && (l1 != l3)) && !(((pow(l1, 2)) == (pow(l2, 2))+(pow(l3, 2))) || ((pow(l2, 2)) == (pow(l3, 2))+(pow(l1, 2)) || ((pow(l3, 2)) == (pow(l1, 2))+(pow(l2, 2)))))) {
               printf("triangulo escaleno\n");
           }
            return 1;
    }
    else{
        return 0;
    }
    
}

int main() {
    
    printf("digite tres numeros para saber se sao lados de um triangulo");
    scanf("%i %i %i", &l1, &l2, &l3);
    
    if(AnalisaTriangulo(l1, l2, l3)==1){
        printf("é um triangulo");
    }
    else { 
        printf("não é um triangulo\n");
    }
    

    return (EXIT_SUCCESS);
}

