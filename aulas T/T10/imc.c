#include <stdio.h>

float imc(float peso, float altura);

int main(){
    float massa, altura;
    double v_imc;

    while (scanf("%f%f", &massa, &altura)==2){
        v_imc = (double) imc(massa, altura);

        if(v_imc<18.5)
            printf("abaixo do peso ideal!");
        else if(v_imc<24.9)
                printf("peso ideal!");
            else if(v_imc<29.9)
                    printf("acima do peso ideal!");
            else
             ...

        
    }
    
    return 0;
}

float imc(float peso, float altura){
    return peso/(altura*altura);
}