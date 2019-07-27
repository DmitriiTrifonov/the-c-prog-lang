#include <stdio.h>


int main()
{
    char c;
    while ((c = getchar()) != EOF){
        if (c == ' ')
        {
            putchar(c);
            // while getchar getting space to std out goes empty symbol
            while ((c = getchar()) == ' ')
                putchar(0);
        }
        putchar(c);
    }
    return 0;
}