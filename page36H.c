#include <stdio.h>

int main() {

    // OK

    // h - leia o nome e as duas notas de um aluno e printe-os na tela

    char studentName[30];
    float a;
    float b;
    float average;

    printf("Input student's name: ");
    scanf("%s", studentName);

    printf("Input 1st test score: ");
    scanf("%f", &a);
    printf("Input 2nd test score: ");
    scanf("%f", &b);

    average = (a+b)/2;
    printf("The student average is %.3f", average);
    
    return 0;
}