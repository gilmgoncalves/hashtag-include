/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplo ilustrativo de conversaõ string-número
* 
*
* Compilar: clang converte.c -o converte
* Executar: ./converte
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    char numero [10] = "1234", numero_2 [8] = "12.5";
   
    printf("%d\n", atoi(numero)); /* o que imprime? */
    printf("%f\n", atof(numero_2)); /* o que imprime? */
    printf("%d\n", atoi(numero_2)); /* o que imprime? */

    return 0;
}
