/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplo ilustrativo de operações com strings
* 
*
* Compilar: clang opstrings.c -o opstrings
* Executar: ./opstrings
*/

#include <stdio.h>
#include <string.h>

int main (){
    char nome [30] = "Francisco Alves", nome_2 [40];

    printf("%lu\n", strlen(nome)); /* o que imprime? */
    strcpy(nome_2, nome);
    puts(nome_2); /* o que imprime? */
    strcat(nome_2, nome);
    puts(nome_2); /* o que imprime? */

    strcpy(nome_2, nome);
    printf("%d\n", strcmp(nome, nome_2)); /* o que imprime? */
    puts(strchr(nome, 'a')); /* o que imprime? */

    return 0;
}