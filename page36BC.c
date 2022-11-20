#include <stdio.h>

int main() {

    // OK

    // b - somar 10 com 15 e mostrar na tela
    // c - multiplicar 10 e 15

    int n1 = 10;
    int n2 = 15;
    int n3 = n1+n2;
    int n4 = n1*n2;

    printf("The sum between %d and %d is %d. \n", n1, n2, n3);
    printf("The product between %d and %d is %d. \n", n1, n2, n4);

    return 0;

}