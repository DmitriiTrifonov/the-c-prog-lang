#include <stdio.h>

int main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        printf("%d\n", getchar() != EOF);
    }
    return 0;
}