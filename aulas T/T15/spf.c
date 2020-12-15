/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplo de utilização da função sprintf
* 
*
* Compilar: clang spf.c -o spf
* Executar: ./spf
*/

#include <stdio.h>

int main(){
    char v[10][30]; /* vetor de 10 strings com tamanho 30 */
    int i;
   
    for(i=0; i<10; i++)
        sprintf(v[i], "%d %d", i, i*i);
    for(i=0; i<10; i++)
        puts(v[i]); /* o que imprime? */

    return 0;
}
