/* #include
*
* MIECC - FEUP / PROG1 - EEC005
*
* aula prática #7 - problema 6
* Crie um programa que mantenha um vetor ordenado. O utilizador deverá escrever valores,
* um de cada vez, que serão inseridos na posição respetiva, enquanto os outros elementos
* serão “arrastados” pelo vetor.
* Assuma que o vetor não terá mais que 15 elementos. Imprima o vetor de cada vez 
* que um valor novo seja inserido.
*
* Exemplo
* Histograma de 30 lancamentos:
*   Introduza o elemento 1: 5.1
*   Vetor: {5.1}
*   Introduza o elemento 2: 3.2
*   Vetor: {3.2 5.1}
*   Introduza o elemento 3: 6.3
*   Vetor: {3.2 5.1 6.3}
*   Introduza o elemento 4: 9.4
*   Vetor: {3.2 5.1 6.3 9.4}
*   Introduza o elemento 5: 10.9
*   Vetor: {3.2 5.1 6.3 9.4 10.9}
*   Introduza o elemento 6: 3.8
*   Vetor: {3.2 3.8 5.1 6.3 9.4 10.9}
*   Introduza o elemento 7: 1.7
*   Vetor: {1.7 3.2 3.8 5.1 6.3 9.4 10.9}
*   Introduza o elemento  ...
*
*/

#include <stdio.h>

#define N_ELEM  15

int insere_ordenado(float vetor[], int n, float numero);
void escreve_vetor(float vetor[], int n);

int main(){
    int n=0, i;
    float v[N_ELEM], num;

    for (i = 0; i < N_ELEM; i++){
        printf("Introduza o elemento %d: ", i+1);
        scanf("%f", &num);
        n = insere_ordenado(v, n, num);
        escreve_vetor(v, n);
    }
    
    return 0;
}

/* 
* Insere numero em vetor com n elementos ordenados. 
* Após a inserção o array fica com n+1 elementos ordenados. 
*/
int insere_ordenado(float vetor[], int n, float numero){
    int i;

/*
* procura posição (i) de inserção da direita (posição n) para a 
* esquerda (posição 0) ao mesmo tempo que arrasta elementos à direita
*/

    for (i = n; i > 0 && numero < vetor[i-1]; i--){
        vetor[i] = vetor[i-1];
    }
    vetor[i]=numero;
    
    return n+1;
}

void escreve_vetor(float vetor[], int n){
    int i;

    printf("{");
    for (i = 0; i < n; i++){
        printf("%.2f ", vetor[i]);
    }
    printf("}\n");
    
}