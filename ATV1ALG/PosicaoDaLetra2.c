#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int achaPosicao(char[]);

int main(){
    char *letra = (char *) malloc(1*sizeof(char));;
    scanf("%c", letra);
    printf("%d\n", achaPosicao(letra));
}

int achaPosicao(char letra[]){
    char alfabeto[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char aux = toupper(letra[0]);
    for(int i=0;i<sizeof(alfabeto);i++){
        if(aux == alfabeto[i]){
            return i+1;
        }
    }
    return 0;
}