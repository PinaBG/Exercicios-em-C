#include <stdio.h>

int validaSenha(int);

int main(){
    int S;
    scanf("%d", &S);
    if((S>=1000&&S<=9999)){
        if(validaSenha(S)==1){
            printf("SIM\n");
        }else{
            printf("NAO\n");
        }
    }else{
        printf("NAO\n");
    }
}

int validaSenha(int S){
    for(int i=0;i<3;i++){
        if(S%10==0){
            return 0;
            break;
        }else{
            S=S/10;
        }
    }
    return 1;
}