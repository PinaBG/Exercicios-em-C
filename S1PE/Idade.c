#include <stdio.h>
int main(){
    int anoatual;
    char nome[21];
    int anonasc;
    int idade=0;
    scanf("%d %s %d", &anoatual, nome, &anonasc);
    idade = anoatual - anonasc;
    printf("%s, voce completa %d anos de idade neste ano.\n", nome, idade);
}