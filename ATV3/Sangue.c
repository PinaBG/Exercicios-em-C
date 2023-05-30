#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int verificaTransfusao(char tipo[], char regraregra[9][10]);

int main(){
    char *tipo = (char *) malloc(200*sizeof(char));
    char regra[9][10] = {"A A",
                        "A O",
                        "B B",
                        "B O",
                        "AB AB",
                        "AB A",
                        "AB B",
                        "AB O",
                        "O O"};
    int aceito = 0;

    scanf("%s",tipo);
    if(verificaTransfusao(tipo, regra)==0){
        printf("transfusao incompativel\n");
    }else{
        printf("transfusao compativel\n");
    }
}

int verificaTransfusao(char tipo[], char regra[9][10]){
    for(int i = 0; i < 9; i++){
        if(strcmp(tipo, regra[i]) == 0){
            return 1;
        }
    }
    return 0;
}