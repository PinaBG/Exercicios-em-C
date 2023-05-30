#include <stdio.h>

void avescomuns(int,int[]);

int main(){
    int n;
    scanf("%d", &n);
    int v[n];
    for(int i=0; i<n; i++){
        scanf("%i", &v[i]);
    }
    avescomuns(n,v);
}

void avescomuns(int n, int v[]){
    int A=0;
    int B=0;
    int C=0;
    int D=0;
    int E=0;
    for(int i=0;i<n;i++){
        if(v[i]==1){
            A++;
        }else if(v[i]==2){
            B++;
        }else if(v[i]==3){
            C++;
        }else if(v[i]==4){
            D++;
        }else if(v[i]==5){
            E++;
        }
    }
    if(A>=B && B>=C && A>=D && A>=E){
        printf("%d\n",1);
    }
    else if(B>=C && B>=D && B>=E){
        printf("%d\n",2);
    }
    else if(C>=D && C>=E){
        printf("%d\n",3);
    }
    else if(D>=E){
        printf("%d\n",4);
    }
    else{
        printf("%d\n",5);
    }

}