#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* verificamaior(char palavra[], char maior[]);

int main(){
    char *palavra = (char *) malloc(200*sizeof(char));
    char *maior = (char *) malloc(200*sizeof(char));
    palavra = verificamaior(palavra, maior);
    if(strlen(palavra)==0){
        printf("Nenhuma palavra foi informada\n");
    }else{
        printf("A maior palavra informada foi %s\n", palavra);
    }
}

char* verificamaior(char palavra[], char maior[]){
    while(scanf("%s", palavra) != EOF){
        if(strlen(palavra)>=strlen(maior) && strcmp(palavra,"EOF")!=0){
            strcpy(maior,palavra);
        }
    }
    return maior;
}