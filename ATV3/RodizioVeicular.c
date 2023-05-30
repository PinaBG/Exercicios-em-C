#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void calculaRodizio(int n, char[n][10]);
int verificaValidade(char[]);

int main(){
    int n;
    scanf("%d", &n);
    char placa[n][10];
    for(int i=0; i<n; i++){
        scanf("%s", placa[i]);
    }
    calculaRodizio(n, placa);
}

void calculaRodizio(int n, char placa[n][10]){
    for(int i=0; i<n; i++){
        if(verificaValidade(placa[i])==1){
            printf("%s\n", "FAILURE");
        }else if(placa[i][7]=='1'||placa[i][7]=='2'){
            printf("%s\n", "MONDAY");
        }else if(placa[i][7]=='3'||placa[i][7]=='4'){
            printf("%s\n", "TUESDAY");
        }else if(placa[i][7]=='5'||placa[i][7]=='6'){
            printf("%s\n", "WEDNESDAY");
        }else if(placa[i][7]=='7'||placa[i][7]=='8'){
            printf("%s\n", "THURSDAY");
        }else{
            printf("%s\n", "FRIDAY");
        }
    }
}

int verificaValidade(char placa[]){
    int aux;
    if(strlen(placa)>8||strlen(placa)<8){
        return 1;
    }else if(placa[3]!='-'){
        return 1;
    }
    aux=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<26;j++){
            if(placa[i] == (char)(65+j)){
                aux+=1;
            }
        }
    }
    if(aux!=3){
        return 1;
    }
    aux=0;
    for(int k=4;k<8;k++){
        for(int l=0;l<10;l++){
            if(placa[k] == (char)(48+l)){
                aux+=1;
            }
        }
    }
    if(aux!=4){
        return 1;
    }
    return 0;
}