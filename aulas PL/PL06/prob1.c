/* #include
*
* MIECC - FEUP / PROG1 - EEC005
*
* aula prática #7 - problema 1
* Escreva um programa que desenhe um histograma de barras horizontais correspondentes ao 
* numero de vezes que sai cada uma das faces de um dado. Considere que são feitos 30 lançamentos
* aleatórios, guardando os resultados num vetor.
*
* Exemplo
* Histograma de 30 lancamentos:
*   1 - ****
*   2 - *******
*   3 - ****
*   4 - *****
*   5 - ******
*   6 - ****
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LANCA   30

int dado();
void desenha_histograma(int resultados[]);

int main(){
    int i, faces[7]={0};

    srand(time(NULL));

    for (i = 0; i < LANCA; i++){
        faces[dado()]++;
    }
    
    desenha_histograma(faces);

    return 0;
}

int dado(){
    return rand()%6+1;
}

void desenha_histograma(int resultados[]){
    int i, j;

    for(i=1;i<7;i++){
        printf("%d - ", i);
        for (j = 0; j < resultados[i]; j++){
            printf("*");
        }
        printf("\n");
    }
}
