#include <stdio.h>

char* impre()
{
    return "#";
}

int main (void)
{
    char* h=impre();

    int altura;
    printf("Digite a altura desejada ");
    scanf("%d", &altura);
    for(int i = 0; i < altura; i++)
    {
        for(int r = 0; r <= i; r++)
        {
            printf("%s", h);
        }
        printf("\n");
    }
    return 0;
}