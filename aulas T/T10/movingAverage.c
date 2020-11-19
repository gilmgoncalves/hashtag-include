/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* Uma média móvel simples sobre n elementos é constituída das médias
* não ponderadas dos subconjuntos de n elementos em um conjunto de dados. 
* Determinar média movél simples em subconjunto de 3 elementos
*
* Compilar: clang movingAverage.c -o movingAverage
* Executar: ./movingAverage
*/

#include <stdio.h>

#define MAVERAGE 3

int main(){
    float num, num1, num2, num3, count=0;

    while(scanf("%f",&num)==1){
        num3=num2; num2=num1; num1=num;
        if(++count<MAVERAGE) continue; /* só calcula depois de ter 3 elementos */
        printf("%.2f ", (num1+num2+num3)/3);
    }

    return 0;
}