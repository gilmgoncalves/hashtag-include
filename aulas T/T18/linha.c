/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplo ilustrativo da utilização de parâmetros na linha de comando
*
* Compilar: clang linha.c -o linha
* Executar: ./linha ficheiro modo
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int i=0,k;
	char cidade[100][8] = {"Porto", "Aveiro", "Coimbra", "Lisboa"}, c;
	float temp[100] = {12.5, 11.8, 12.2, 14};
	FILE *fp; 		/* declara variável de ficheiro */

	if (argc < 3){	/* número de argumentos é suficiente? */
		printf("Uso: %s ficheiro modo\n", argv[0]);
		return 1;
	}

	fp = fopen(argv[1], argv[2]); /* abre ficheiro */
		/* verifica se apontador inválido */

	if(argv[2][0] == 'w'){
		for (i = 0; i < 4; i++) {
			fprintf(fp,"%s %f\r\n", cidade[i], temp[i]);
	 	}
	}else
		if(argv[2][0] == 'r'){
			/* lê do ficheiro */
			i=0;
            while (fscanf(fp, "%s %f", cidade[i], &temp[i])==2)
                i++;
            
		} else
		    printf("Operação não reconhecida!\n");

    for(i=0;i<4;i++)
        printf("%s %f\n", cidade[i], temp[i]);

	fclose(fp);
	printf("Utilização do ficheiro terminada\n");
	return 0;
}
