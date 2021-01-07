/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplo ilustrativo da escrita de ficheiros binários
*
* Compilar: clang escrevebin.c -o escrevebin
* Executar: ./escrevebin
*/

#include <stdio.h>
#include <string.h>

int main()
{
	FILE *f;
	float v[]={3.13, 5.67, 4.98, 2.56, -2.35, -4.57, -4.89, -0.34, 3.1415};

	f = fopen("real.dat", "wb");
	
   	fwrite(v, sizeof(float), 9, f);

	fclose(f);
}
