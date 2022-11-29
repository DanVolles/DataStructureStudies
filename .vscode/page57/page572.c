/* Elabore um programa que leia "n" 
 * números digitados e apresente a sua média
 */

#include <stdio.h>

int main () {
    
    int number [10];
    int n;
    int i;
    int sum = 0;
    int average;

    printf("Enter the number of elements: ");
    scanf("%i", &n);

    for (i = 0; i < n; i++) {
        printf("%i value: ", i + 1);
        scanf("%i", &number[i]);
 
        // input values into sum
        sum += number [i];
    }
    
    average = sum/n;

    printf("The average of these %i numbers is %i.", n, average);

    return 0;
}