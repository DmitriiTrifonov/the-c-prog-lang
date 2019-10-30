#include <stdio.h>

int main()
{
    char c;
    int n; // n is used as trigger for typing tabs, backspace or backslashes
    while ((c = getchar()) != EOF){
        n = 0;
        if (c == '\t') {
            putchar('\\');
            putchar('t');
            n = 1;
        }
        if (c == 8) {
            putchar('\\');
            putchar('b');
            n = 1;
        }
        if (c == '\\') {
            putchar('\\');
            putchar('\\');
            n = 1;
        }
        if (n == 0) putchar(c);
    }
    return 0;
}
