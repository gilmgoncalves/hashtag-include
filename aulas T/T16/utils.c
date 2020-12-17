/* #include 
*
*  MIECC - FEUP / PROG1 - EEC005
*
* biblioteca com duas funções: 
* 1) cálculo da média de dois valores reais
* 2) cálculo de xn com n inteiro.
*
* Compilar: clang -c modramp.c
*/

/* retorna a média de dois valores reais */
float media(float x, float y)
{
   return (x + y)/2.0;
}

/* retorna x^n */
float pot(float x, int n)
{
   int i, nvezes;
   float p = 1.0;

   if(n == 0) return p;
   if(n > 0) nvezes = n;
   else  nvezes = -n;
   for(i = 1; i <= nvezes; i++)
       if(n > 0) p = p*x;
       else p = p/x;
   return p;
}
