#include <stdio.h>
#include <string.h>

int main()
{
    char sangue[100], compativel[9][10] = {"A A", "A O", "B B", "B O", "AB AB", "AB A", "AB B", "AB O", "O O"};
    int i, aceito = 0;

    gets(sangue);

    for(i = 0; i < 9; i++)
    {
        if(strcmp(sangue, compativel[i]) == 0)
        {
            printf("transfusao compativel\n");
            aceito ++;
        }
    }
    if(aceito == 0)
    {
        printf("transfusao incompativel\n");
    }

    return 0;
}