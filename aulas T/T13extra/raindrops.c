/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplo ilustrativo da utilização de simulação
*
* Compilar: clang raindrops.c -o raindrops
* Executar: ./raindrops
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define raindrops 10000000
double between0and1();
int inCircle(double x, double y);

int main(){
   double x,y;
   int i, j, nexperiments, hits=0; /* #raindrops in the 1st quadrant of unit circle */
   double pi;

   printf("Indique número de experiências (#gotas = %d):", raindrops);
   scanf("%d", &nexperiments);

   /* initialize random numbers*/
   srand(time(NULL));

   for (i = 0; i < nexperiments; i++) {
     /* reset raindrops in circle */
     hits=0;

     /* let it rain */
     for ( j = 0; j < raindrops; j++){
       x = between0and1();
       y = between0and1();
       hits += inCircle(x,y);
     }
     pi=(double)hits/raindrops*4;
     printf("# experiência (# número de gotas= %d) = %d , valor estimado de pi %.6lf \n",raindrops, i,pi);
   }
   return 0;
}

double between0and1(){
    return (double)rand()/RAND_MAX;
}

int inCircle(double x, double y){
  if (x*x+y*y<=1)
    return 1;
  else
    return 0;
}
