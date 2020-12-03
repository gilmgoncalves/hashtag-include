#include <stdio.h>

int converte_codigo_cores(int cor, int pos, float *ret){
    /* inserir código aqui */
}

int main(){
    int cor, i;
    float resistor = 0.0;
    printf("Cores:\n 0 - Black \n 1 - Brown \n 2 - Red \n 3 - Orange \n 4 - Yellow \n 5 - Green \n 6 - Blue \n 7 - Violet \n 8 - Grey \n 9 - White\n\n");
    for(i = 1; i < 4; i++){
        do{
            printf("Introduza a cor da banda %d: ", i);
            scanf("%d", &cor);
        }while((cor < -1) || (cor > 12));
        
        /* inserir código aqui */

    }
    printf("Valor da resistencia: %.2f Ohms\n", resistor);

}
