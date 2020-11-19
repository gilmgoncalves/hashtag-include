/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* simula lançamento de uma moeda
*
* Compilar: clang graph.c -o graph
* Executar: ./graph < valores.txt
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LANCA 20

int main(){
    int cara=0, coroa=0, i;

    /* remover comentário para "aleatório" */
    /* srand(time(NULL)); */

    for(i=0; i<LANCA; i++){
        if(rand()%2==0){
            cara++;
            printf("cara ");
        } else{
            coroa++;
            printf("coroa ");
        }
    }

    printf("\n\n Em %d lançamentos cara = %d e coroa = %d\n\n", LANCA, cara, coroa);
    
    return 0;
}