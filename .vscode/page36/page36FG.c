#include <stdio.h>

void main() {

    // OK

    // f - leia dois numeros e apresente o seu produto
    // g - leia dois números e apresente a sua subtração
    
    int a;
    int b;
    int c;
    int d;
    int e;
    
    printf("Let's do the math?\n");
    printf("Enter the 1st number: ");
    scanf("%d", &a);
    printf("Enter the 2nd number: ");
    scanf("%d", &b);
    
    c = a + b;   
    printf("The sum between %d and %d is %d.", a, b, c);
    
    d = a - b;
    printf("\nThe difference between %d and %d is %d.", a, b, d);

    e = a * b;
    printf("\nThe product between %d and %d is %d.", a, b, e);

}