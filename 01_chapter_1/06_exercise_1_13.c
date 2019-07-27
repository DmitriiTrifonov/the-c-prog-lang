#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c, sc, i, j, state, max;
    int wordLenght[11];

    max = 0;
    state = OUT;
    sc = 0;
    for (i = 0; i < 10; ++i)
    {
        wordLenght[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        ++sc;
        if (c == ' ' || c == '\n' || c == '\t')
        {
            --sc;
            state = OUT;
            if (sc <= 10)
                ++wordLenght[sc];
                if (wordLenght[sc] > max) max = wordLenght[sc];
            sc = 0;
        }
        else if (state == OUT)
            state = IN;
    }
    for (i = 1; i < 11; ++i){
        printf("%d",i);
        for (j = 1; j <= wordLenght[i]; ++j)
                    printf("#");
                printf("\n");
    }
    return 0;
}