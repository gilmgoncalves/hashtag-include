#include <stdio.h>
#include <limits.h>

void tempovolta(int tempo);
float tempomedio(int total, int voltas);

int main(){
    int i, numvoltas, tempototal=0, mintempo=INT_MAX, melhorvolta=0, tempo;

    printf("Indique número de voltas: ");
    scanf("%d", &numvoltas);

    for(i=1;i<=numvoltas;i++){
        scanf("%d", &tempo);
        tempototal+=tempo;
        if(tempo<mintempo){
            mintempo=tempo;
            melhorvolta=i+1;
        }
    }

    printf("melhor tempo na volta número %d\n", melhorvolta);
    tempovolta(mintempo);
    printf("tempo médio por volta\n");
    tempovolta(tempomedio(tempototal,numvoltas));

    return 0;
}

void tempovolta(int tempo){
    int mins, secs, milsecs;

    milsecs = tempo % 1000;
    secs = tempo / 1000;
    mins = secs / 60;
    secs -= mins*60;

    printf("%d minutos %d segundos e %d milésimos\n", mins, secs, milsecs);
}
float tempomedio(int total, int voltas){
    return (float)total/voltas;
}
