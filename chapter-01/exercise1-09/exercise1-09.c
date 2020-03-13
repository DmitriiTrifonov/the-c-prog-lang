#include <stdio.h>

int main() {
    char c;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            putchar(c);
            // while getchar getting space empty symbol goes to std out
            while ((c = getchar()) == ' ')
                putchar(0);
        }
        putchar(c);
    }
    return 0;
}
