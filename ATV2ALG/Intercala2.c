#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int q1, q2;
    scanf("%d",&q1);
    scanf("%d",&q2);

    int soma=q1+q2;
    int *vaux = (int*)malloc(soma * sizeof(int));

    for (int i = 0; i < soma; i++) {
        scanf("%d", &vaux[i]);
    }

    int auxiliar2;
    int auxiliar3;
    for (int k=0; k<(soma-1); k++){
        auxiliar2 = k;
        for (int l=k+1; l<soma; l++) {
            if (vaux[l] < vaux[auxiliar2]) {
                auxiliar2 = l;
            }
        }
        if (k != auxiliar2) {
            auxiliar3 = vaux[k];
            vaux[k] = vaux[auxiliar2];
            vaux[auxiliar2] = auxiliar3;
        }
    }
    for (int m=0; m<soma; m++) {
        printf("%d\n", vaux[m]);
    }

}