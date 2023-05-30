#include <stdio.h>

void inverteNumeros();

int main(){
    int numeros[30];
    int invertidos[30];
    int cont=0;
    int menu=1;
    while(menu!=0){
        scanf("%d", &numeros[cont]);
        menu = numeros[cont];
        cont++;
    }
}

void inverteNumeros(){
    int *num = numeros;
    int *inv = invertidos;
    
}