#include <stdio.h>

int calculaTomada(int,int,int,int);

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d", &a,&b,&c,&d);
    printf("%d\n", calculaTomada(a,b,c,d));
}

int calculaTomada(int a, int b, int c, int d){
    return (a-1)+(b-1)+(c-1)+(d);
}