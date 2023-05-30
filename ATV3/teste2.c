#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int strkids(char const *a, char const *b)
{
    for (;; a++, b++)
    {
        int d = tolower(*a) - tolower(*b);
        if (d != 0 || !*a)
            return d;
    }
}

int comparar(const void *a, const void *b)
{
    const char *v1 = (const char *) a; const char *v2 = (const char *) b;
    return strkids(v2, v1);
}

int main()
{
    char kids[1000][101];int num_kids = 0;
    while (fgets(kids[num_kids], 101, stdin))
        ++num_kids;
    qsort(kids, num_kids, 101, comparar);
    printf("%s\n", kids[0]);
    return 0;
}