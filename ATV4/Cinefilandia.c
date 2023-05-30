#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostraSigla(char[]);

int main(){
    char *filme = (char *) malloc(200*sizeof(char));
    scanf("%[^\n]", filme);
    mostraSigla(filme);
}

void mostraSigla(char filme[]){
    for(int i=0; i<strlen(filme); i++){
        if(i==0){
            printf("%c", filme[i]);
        }else if(filme[i]==' '){
            printf("%c", filme[i+1]);
        }
    }
    printf("\n");
}