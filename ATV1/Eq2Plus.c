#include <stdio.h>
#include <math.h>

int eq2(float, float, float, float*, float*);

int main(){
    float A;
    float B;
    float C;
    float x1;
    float x2;

    scanf("%f %f %f", &A, &B, &C);

    if(eq2(A, B, C, &x1, &x2) == 0){
        printf("nao ha raiz real\n");
    }
    else if(eq2(A, B, C, &x1, &x2) ==1){
        printf("%.4f\n", x1);
    }
    else{
        printf("%.4f %.4f\n", x1, x2);
    }
    return 0;
}

int eq2(float A, float B, float C, float *x1, float *x2){
    float delta;
    delta = pow(B,2) - (4*A*C);

    if (delta < 0){
        return 0;
    }
    else if (delta == 0){
        *x1 = -B/(2*A);
        return 1;
    }
    else{
        delta = sqrt(delta);
        *x1 = (-B + delta)/(2*A);
        *x2 = (-B - delta)/(2*A);
        return 2;
    }
}