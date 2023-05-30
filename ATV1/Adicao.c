#include <stdio.h>

int adicao(int, int);

int main()
{
    long int A, B;

    scanf("%ld %ld", &A, &B);
    printf("%d\n", adicao(A, B));

    return 0;
}

int adicao(int A, int B)
{
    if(B == 0)
    {
        return A;
    }
    return adicao(A+1, B-1);
}