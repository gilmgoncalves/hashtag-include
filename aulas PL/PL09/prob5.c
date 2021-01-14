/* #include
*
* MIECC - FEUP / PROG1 - EEC005
*
* aula prática #9 - problema 5
* Escreva um programa que pede ao utilizador para escrever uma frase e apresenta no 
* ecrã quantas palavras constituem a frase, a palavra de maior comprimento e o 
* comprimento médio das palavras.
*
* Exemplo
* Frase? O jornal de hoje tem na capa uma fotografia interessante
*   Numero de palavras: 10
*   Palavra maior: interessante
*   Comprimento medio: 4.7
*
*/

#include <stdio.h>
#include <string.h>

#define NMAX 100 /* numero max de caracteres de cada string lida */

void reads(char *s, int n);

int main(){
    char frase[NMAX], maior[NMAX]="", *straux;
    int conta=0, total=0, comp;

    printf("Frase? ");
    reads(frase, NMAX-1);

    /* deteta 1a palavra */
    straux = strtok(frase, " .,?!;:-");
    while(straux!=NULL){
    /* conta palavras */
        conta++;
        comp = strlen(straux);
    /* verifica se é a maior palavra*/
        if(comp>strlen(maior)) strcpy(maior,straux);
    /* acumula comprimento */
        total += comp;
    /* próxima palavra */
        straux=strtok(NULL," .,?!;:-");
    }

    printf("Numero de palavras: %d\n", conta);
    printf("Palavra maior: %s\n", maior);
    printf("Comprimento medio: %.1f\n", (float)total/conta);

    return 0;
}

/* le frase e remove '\n' */
void reads(char *s, int n) {
    fgets(s, n, stdin);
    if (s[strlen(s)-1]=='\n') s[strlen(s) - 1] = '\0';
}