/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplo ilustrativo de simulação num problema de random walk
*
* Compilar: clang randomwalk.c -o randomwalk
* Executar: ./randomwalk
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define bridgesize 7
#define nexperiments 50

int backorforward();

int main(){
   int i, position, steps, maxsteps=0, totalsteps=0;

   /* initialize random numbers*/
   srand(time(NULL));

   for (i = 0; i < nexperiments; i++) {
     /* reset position and steps */
     steps=0;
     position = bridgesize/2;
     printf("experiência # %d e posição inicial %d \n", i, position);

     /* let's walk */
     while (position>0 && position<bridgesize+1){
       position += backorforward();
       steps++;
     }

     if (steps>maxsteps)
      maxsteps = steps;
     totalsteps += steps;
      printf("(# número de experiências= %d) número de passos = %d \n",i, steps);
   }
   printf("(# número de experiências= %d) valor médio de passos = %.2f , máximo de passos %d \n",nexperiments, (float)totalsteps/nexperiments, maxsteps);
   return 0;
}

int backorforward(){
    if (rand()%2)
      return -1;
    else
      return 1;
}
