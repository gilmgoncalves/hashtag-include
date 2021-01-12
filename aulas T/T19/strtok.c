/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplo ilustrativo da utilização da função strtok
*
* Compilar: clang strtok.c -o strtok
* Executar: ./strtok
*/

#include <stdio.h>
#include <string.h>

int main(){

char *straux, str[] = "Hello,Programming;World";

straux=str;
puts(strtok(straux, ",;")) ;       /* Imprime Hello */
puts(strtok(NULL, ",;")) ;      /* Imprime Programming*/
puts(strtok(NULL, ",;")) ;      /* Imprime World*/

straux=str;
strtok(straux, ",;");
while(straux!=NULL){
    puts(straux);
    straux=strtok(NULL, ",;");
}

}