#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void montaCitacao(char[]);

int main(){
  char *nomeCompleto = (char *) malloc(200*sizeof(char));

  scanf(" %[^\t\n]s", nomeCompleto);
  montaCitacao(nomeCompleto);
}

void montaCitacao(char nomeCompleto[]){
    int contAux = 0;
    char *aux = (char *) malloc(200*sizeof(char));
    char *siglas = (char *) malloc(200*sizeof(char));
    char *ultimoNome = (char *) malloc(200*sizeof(char));
    char *substring = strtok(nomeCompleto," ");

    while(substring != NULL){
        siglas[contAux] = substring[0];
        contAux++;
        strcpy(ultimoNome,substring);
        substring = strtok(NULL," ");
    }
    if(strlen(siglas) < 1){
        printf("%s\n",nomeCompleto);
    }else{
        printf("%s, ",ultimoNome);
        for(int j = 0; j < contAux-1; j++){
            if(j<contAux-2){
                aux = " ";
            }else{
                aux = "\n";
            }
            printf("%c.%s", siglas[j], aux);
        }
    }
}