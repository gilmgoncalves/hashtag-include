/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* que lê uma sequência de números inteiros positivos e 
* determina um conjunto de características da sequência
*
* Compilar: clang sequencia.c -o sequencia
* Executar: ./sequencia
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUM 50

void menu_opcao(unsigned int *opcao);
int lerSeq(int v[]);
void escreverSeq(int v[], int n);
void minmaxSeq(int v[], int n, int *min, int *max);
double mediaSeq(int v[], int n);
double desviopSeq(int v[], int n);
int parimparSeq(int v[], int n, int *par, int *impar);
int ordenaSeq(int v[], int n, int ordem);
int pesquisaSeq(int v[], int n, int tipo);

int main(){
    unsigned int opcao, fim=0;
    int sequencia[NUM], numelem = 0, min, max, par, impar, ordem, num;
    double media, desviop;

    do {
		menu_opcao(&opcao);

		switch (opcao) {
			case 1: numelem = lerSeq(sequencia); break;
			case 2: escreverSeq(sequencia, numelem);
                    getchar();
                    getchar();
                    break;
			case 3: minmaxSeq(sequencia, numelem, &min, &max); 
                    system("clear");
                    printf("\n\nMínimo da sequência: %d\n", min);
                    printf("\nMáximo da sequência: %d\n", max);
                    getchar();
                    getchar();
                    break;
			case 4: media = mediaSeq(sequencia, numelem);
                    system("clear");
                    printf("\n\nMédia da sequência: %lf\n", media);
                    getchar();
                    getchar();
                    break;
			case 5: desviop = desviopSeq(sequencia, numelem);
                    system("clear");
                    printf("\n\nDesvio padrão da sequência: %lf\n", desviop);
                    getchar();
                    getchar();
                    break;
			case 6: parimparSeq(sequencia, numelem, &par, &impar); getchar();
                    getchar();
                    break;
            case 7: printf("Ordem crescente (0) ou decrescente (1)? ");
                    scanf("%d", &ordem);
                    ordenaSeq(sequencia, numelem, ordem); 
                    system("clear");
                    printf("\n\nSequência ordenada\n");
                    escreverSeq(sequencia, numelem); getchar();
                    getchar();
                    break;
            case 8: printf("Pesquisa linear (0) ou binária (1)? ");
                    scanf("%d", &num);
                    system("clear");
                    pesquisaSeq(sequencia, numelem, num); getchar();
                    getchar();
                    break;
			case 0: fim = 1;
		}
	} while(!fim);

}

void menu_opcao(unsigned int *opcao)
{
  do {
      system("clear");
      printf("\n\t\tAnálise de uma sequência de inteiros positivos\n");
      printf("1: Ler a sequência\n");
      printf("2: Escrever a sequência\n"); 
      printf("3: Calcular o máximo e mínimo da sequência\n");
      printf("4: Calcular a média da sequência\n");
      printf("5: Calcular o desvio padrão\n");
      printf("6: Verificar se a sequência é só constituída por números pares/ímpares\n");
      printf("7: Terminar\n");
      printf(" \n\nOpção: ");
      
      scanf("%d", opcao);
	} while(*opcao < 1 || *opcao > 7);
}

int lerSeq(int v[]){
    int i, val;

    printf("Introduza elementos (0 termina): ");

    for ( i = 0; i < NUM; i++)
    {
        scanf("%d", &val);
        if(val==0) break;
        v[i]=val;
    }
    
    return i;
}

void escreverSeq(int v[], int n){
    int i;

    printf("Sequencia de valores: ");
    for (i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void minmaxSeq(int v[], int n, int *min, int *max){
    int i;

    *max = v[0];
    *min = v[0];

    for (i = 1; i < n; i++){
        if (v[i]>*max) *max=v[i];
        if (v[i]<*min) *min=v[i];
    }
    
}

double mediaSeq(int v[], int n){
    int i;
    double media = 0;

    for (i = 0; i < n; i++){
        media += v[i];
    }  

    return media/n;
}

double desviopSeq(int v[], int n){
    int i;
    double media, dp=0;

    media = mediaSeq(v, n);

    for (i = 0; i < n; i++){
        dp += (v[i]-media)*(v[i]-media);
    } 

    dp = sqrt(dp/(n-1));
    
    return dp;
}


int parimparSeq(int v[], int n){

/*  devolve 0 se contiver número pares e impares
    devolve 1 se apenas contem números impares
    devolve 2 se apanas contem números pares
*/

    return -1;
}

int ordenaSeq(int v[], int n, int ordem){
  
/*  devolve 1 se conseguir ordenar
    devolve 0 em caso de erro
*/
    return 0;
}

int pesquisaSeq(int v[], int n, int tipo){
    
/*  devolve posição onde encontrou número
    -1 em caso de erro
*/
    return -1;
}
