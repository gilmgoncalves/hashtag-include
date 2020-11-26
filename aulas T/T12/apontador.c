/*  #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplo que ilustra o conceito de apontador
* e dos operadores 'endereço' e 'apontado por+
*
* Compilar: clang apontador.c -o apontador
* Executar: ./apontador
*/

#include <stdio.h>

int main(){
    int var = 6925, *ptr;
    
    ptr = &var;

    printf("valor armazenado na variável var: %d\n", var);
    printf("valor armazenado na variável ptr: %p\n", ptr);
    printf("endreço da variável ptr: %p\n", &ptr);
    printf("valor apontado por ptr: %d\n", *ptr);
    
    return 0;
}