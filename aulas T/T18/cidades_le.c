/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplo ilustrativo da leitura de ficheiros de texto
*
* Compilar: clang cidades_le.c -o cidades_le
* Executar: ./cidades_le
*/

#include <stdio.h>

int main()
{
    int i,k;
    char cidade[10][8];
    float temp[10];
    FILE *fin;    /* declara variável de ficheiro */
    
    fin = fopen("exp.txt", "r"); /* abre ficheiro para leitura*/
    
    //for (i = 0; i < 4; i++)
    i=0;
	while(fscanf(fin,"%s %f", cidade[i], &temp[i])==2)
        i++;
    
    fclose(fin);
    
    for (k = 0; k < i; k++)
        printf("%s %f\n", cidade[k], temp[k]);
}
