#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void montaParidade(char mensagem[]);

int main(){
    char *mensagem = (char *) malloc(100*sizeof(char));
    scanf("%s",(char *)mensagem);
    montaParidade(mensagem);
}

void montaParidade(char mensagem[]){
    int par=0;
    for(int i=0;i<strlen(mensagem);i++){
        if(mensagem[i]=='1'){
            par++;
        }
    }
    if(par%2==0){
        strcat(mensagem,"0");
        printf("%s\n",mensagem);
    }else{
        strcat(mensagem,"1");
        printf("%s\n",mensagem);
    }
}