/* PERGUNTA: 
 * O programa a seguir está correto?
 * RESPOSTA:
 * Foi necessário colocar o operador de endereço (&) ao lado do indicador VAL na linha 11.
 * O programa não estava correto até essa alteração.
 * De resto, tudo certinho!
 */

#include <stdio.h>
// #include <stdlib.h>

const int VAL = 123;

int main() {

    int *p = &VAL;
    
    printf("%d \n", *p);
    
    return 0;
}
