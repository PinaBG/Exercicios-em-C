#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* contaVolta(char[], int);

int main(){
    int n;
    scanf("%d", &n);
    char *comandos = (char *) malloc(n*sizeof(char));
    scanf("%s", comandos);
    printf("%s\n", contaVolta(comandos, n));
}

char* contaVolta(char comandos[], int n){
    char *posicaoFinal = (char *) malloc(10*sizeof(char));
    strcpy(posicaoFinal,"N");
    for(int i=0;i<n;i++){
        if(comandos[i]=='D'){
            if(posicaoFinal[0] == 'N'){
                strcpy(posicaoFinal,"L");
            }else if(posicaoFinal[0] == 'L'){
                strcpy(posicaoFinal,"S");
            }else if(posicaoFinal[0] == 'S'){
                strcpy(posicaoFinal,"O");
            }else if(posicaoFinal[0] == 'O'){
                strcpy(posicaoFinal,"N");
            }
        }else if(comandos[i]=='E'){
            if(posicaoFinal[0] == 'N'){
                strcpy(posicaoFinal,"O");
            }else if(posicaoFinal[0] == 'O'){
                strcpy(posicaoFinal,"S");
            }else if(posicaoFinal[0] == 'S'){
                strcpy(posicaoFinal,"L");
            }else if(posicaoFinal[0] == 'L'){
                strcpy(posicaoFinal,"N");
            }
        }
    }
    return posicaoFinal;
}