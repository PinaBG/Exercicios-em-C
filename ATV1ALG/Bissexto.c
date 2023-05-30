#include <stdio.h>

void verificaBissexto(int ano);

int main(){
    long int ano;
    scanf("%ld", &ano);
    verificaBissexto(ano);
}

void verificaBissexto(int ano){
    if(ano%400==0 || (ano%4==0 && ano%100!=0)){
        printf("ANO BISSEXTO\n");
    }else{
        printf("ANO NAO BISSEXTO\n");
    }
}