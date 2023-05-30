#include <stdio.h>

int subtracao(int, int);

int main()
{
    long int A, B;

    scanf("%ld %ld", &A, &B);
    printf("%d\n", subtracao(A, B));

    return 0;
}

int subtracao(int A, int B)
{
    if(B == 0)
    {
        return A;
    }
    return subtracao(A-1, B-1);
}