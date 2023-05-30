#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int q1, q2;
    scanf("%d",&q1);
    scanf("%d",&q2);

    int v1[q1], v2[q2];
    for (int i = 0; i < q1; i++) {
        scanf("%d", &v1[i]);
    }
    for (int j = 0; j<q2; j++) {
        scanf("%d", &v2[j]);
    }
    int soma=q1+q2;
    int *vaux = (int*)malloc(soma * sizeof(int));;

    memcpy(vaux, v1, sizeof(v1));
    memcpy(vaux+ q1, v2, sizeof(v2));


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