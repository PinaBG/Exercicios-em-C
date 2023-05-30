#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void verificaPangrama(char *, char *);

int main(){
    char *str = (char *) malloc(200*sizeof(char)), a;
    int soma, alfa=0;

    while(scanf("%s", str) != EOF){
        alfa=0;
        for(int i=97;i<123;i++){
            soma=0;

            for(int j=0;j<strlen(str);j++){
                a = tolower(str[j]);
                if(a == (char)i){
                    soma = soma + 1;
                }
            }

            if(soma != 0){
                alfa = alfa + 1;
            }
        }

        if(alfa==26){
            printf("sim\n");
        }else{
            printf("nao\n");
        }
    }
}

void verificaPangrama(char palavra[], char palavra2[]){

}