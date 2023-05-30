#include <stdio.h>

int maior(int, int, int);

int main(){
    int n1,n2,n3;
    scanf("%d %d %d", &n1,&n2,&n3);
    printf("%d eh o maior.\n", maior(n1,n2,n3));
    return 0;
}

int maior(int n1,int n2,int n3){
    if(n1>n2){
        if(n1>n3){
            return(n1);
        }else{
            return(n3);
        }
    }else if(n2>n3){
        return(n2);
    }else{
        return(n3);
    }
}
