#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* verificamenor(char palavra[], char menor[]);

int main(){
    char *palavra = (char *) malloc(200*sizeof(char));
    char *menor = (char *) malloc(200*sizeof(char));
    palavra = verificamenor(palavra, menor);
    if(strlen(palavra)==0||strcmp(palavra,"EOF")==0){
        printf("Nenhuma palavra foi informada\n");
    }else{
        printf("A menor palavra informada foi %s\n", palavra);
    }
}

char* verificamenor(char palavra[], char menor[]){
    scanf("%s", palavra);
    strcpy(menor,palavra);
    while(scanf("%s", palavra) != EOF){
        if(strlen(palavra)<=strlen(menor) && strcmp(palavra,"EOF")!=0){
            strcpy(menor,palavra);
        }
    }
    return menor;
}