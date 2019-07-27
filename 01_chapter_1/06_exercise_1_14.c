#include <stdio.h>


int main()
{
    int ascii[128];     
    int c = 0;
    int i, j;

    for (i = 0; i < 128; ++i)   
        ascii[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if (c < 128)    
            ++ascii[c];
    }

    
    for (i = 32; i < 127; ++i)
    {
        if (ascii[i] > 0)       
        {
            printf("\"");
            putchar(i); 
            printf("\": ");

            for (j = 1; j <= ascii[i]; ++j)
                printf("#");
            printf("\n");
        }
    }
    return 0;
}