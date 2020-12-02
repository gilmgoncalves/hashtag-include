#include <stdio.h>
#include <limits.h>

int main(){
    int i, numvoltas, mintempo=INT_MAX, melhorvolta=0, tempo;

    printf("Indique número de voltas: ");
    scanf("%d", &numvoltas);

    for(i=1;i<=numvoltas;i++){
        scanf("%d", &tempo);
        if(tempo<mintempo){
            mintempo=tempo;
            melhorvolta=i;
        }
    }

    printf("melhor volta %d na volta número %d\n", mintempo, melhorvolta);

}