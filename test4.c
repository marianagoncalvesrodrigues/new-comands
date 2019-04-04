//sqncia de Fibonacci

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n=0;
int tn=1;
int tn2=1;

int main() {
    
    printf("a sequencia de fibonacci é:\n");
    
    while (n>=0) {
        n = tn + tn2;
        printf("%i", n);
        n++;
    }

    return (EXIT_SUCCESS);
}

