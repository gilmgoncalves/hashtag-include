/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* programa que lê sucessivas strings até ser introduzida “.” e concatene 
* as strings lidas numa só string.
* 
*
* Compilar: clang reads.c -o reads
* Executar: ./reads
*/

#include <stdio.h>
#include <string.h>

#define NCAR 20 /* numero max de caracteres de cada string lida */
#define NTOTAL 80 /* numero max de caracteres da string resultado */

void reads(char *s, int n) {
    fgets(s, n, stdin);
    s[strlen(s) - 1] = '\0';
}

int main(){
    char s[NCAR], stotal[NTOTAL] = "";
    
    while(1) {
        printf("Escreva uma string com menos que %d caracteres: ", NCAR-1);
        reads(s, NCAR);
        if(strcmp(s, ".") == 0) break;
        if(strlen(stotal) + strlen(s) > NTOTAL - 1) break;
        strcat(s, " ");
        strcat(stotal, s);
    }
    printf("%s\n", stotal);

    return 0;
}
