#include <stdio.h>

int main() {

    // OK

    // a - printar nome na tela
    // d - pergunte um nome e imprima-o na tela
    // e - pergunte um nome e um sobrenome e imprima-os na tela

    char computer [] = "Robot";
    char name[20];
    char lastName[20];

    printf("Hello! I am %s \n", computer);

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your last name: ");
    scanf("%s", lastName);

    printf("Hello, %s %s!", name, lastName);

    return 0;


}