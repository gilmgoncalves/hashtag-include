int var = 10;

int *ptr = &var;

*ptr = 20;




…
int x = 1, y = 2;
int *ip;
ip = &x;  
y = *ip;  
x = (int) ip;   /* atencao... */
*ip = 3;
…




passing array to function in char

void func(int a[], int size){

}

int main(){
    int n=5;

    int arr[5] = { 1, 2, 3, 4, 5};

    func( arr, n);
    
    return 0;
}


#include <stdio.h>

int main(){
    int k;
    int *p;
    *p = 10; 		/* Onde colocar 10? */
    printf("%d\n", *p);	
    return 0;
}

int k;
&k = 0x1000;
