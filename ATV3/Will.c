#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void coisasEstranhas(char alfabeto[], int n, int v[]);

int main(){
    char *alfabeto = (char *) malloc(26*sizeof(char));
    int n;
    while(scanf("%s", alfabeto) != EOF){
        scanf("%d",&n);
        int v[n];
        for(int j=0; j<n; j++){
            scanf("%i", &v[j]);
        }
        coisasEstranhas(alfabeto,n,v);
    }
}

void coisasEstranhas(char alfabeto[], int n, int v[]){
    for(int i=0;i<n;i++){
        printf("%c",alfabeto[v[i]-1]);
    }
    printf("\n");
}