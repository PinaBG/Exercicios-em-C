#include <stdio.h>

void verificaHorario(int, int, int);

int main(){
    int deadEnd,t1,t2;
    scanf("%d", &deadEnd);
    scanf("%d %d", &t1, &t2);
    verificaHorario(deadEnd,t1,t2);
}

void verificaHorario(int deadEnd, int t1, int t2){
    if((t1+t2)<=deadEnd){
        printf("Farei hoje!\n");
    }else{
        printf("Deixa para amanha!\n");
    }
}