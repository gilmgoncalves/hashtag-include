/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* Escreva um programa que lê um conjunto de nomes separados por vírgulas. 
* Considere que no máximo são lidos 20 nomes.
* Implemente uma função que separe os nomes guardados numa string e os guarde
* num vetor, retornando quantos nomes encontrou. Sugestão: utilize função strtok
*    int processa(char *str, char nomes[20][50]);
*
* Implemente outra função que converta para maiúscula o primeiro carácter de cada nome guardado no vetor. Sugestão: utilize função toupper
*    void maiusculas(char nomes[20][50]);*
* Compilar: clang nomes.c -o nomes
* Executar: ./nomes
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXN 20
#define TOKENS ","

int processa(char *str, char nomes[][50]);
void maiusculas(char nomes[][50]);

int main(){
    char nomes[MAXN][50], frase[100]="joão,ana,carlos,catarina,sofia,miguel,tiago,emília";
    int nnomes, i;

    puts(frase);

    nnomes = processa(frase, nomes);

    for(i=0;i<nnomes;i++)
        puts(nomes[i]);

    maiusculas(nomes);

    for(i=0;i<nnomes;i++)
        puts(nomes[i]);

    return 0;
}

int processa(char *str, char nomes[][50]){
    int num=0;
    char *straux;

    straux = strtok(str, TOKENS);

    while(straux!=NULL && num<MAXN){
        strcpy(nomes[num++],straux);
        straux = strtok(NULL, TOKENS);
    }

    return num;

}

void maiusculas(char nomes[][50]){
    int i;

    for (i = 0; i < MAXN; i++){
        nomes[i][0] = toupper(nomes[i][0]);
    }
    
   
}