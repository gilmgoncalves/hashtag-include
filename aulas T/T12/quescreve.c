
/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* o que escreve o programa? 
*
* Compilar: clang decompos.c -o decompos
* Executar: ./decompos
*/

#include <stdio.h>

int main(){
    int i = ((65 * 256 + 66) * 256 + 67) * 256 + 68;
    int *pi;
    char *pc;

    pi = &i;
    pc = (char *) pi;

    printf("%c %c %c %c\n", *(pc+3), *(pc+2), *(pc+1), *pc);
	    printf("%x\n", *pi);
	    printf("%d\n", *pi);
}