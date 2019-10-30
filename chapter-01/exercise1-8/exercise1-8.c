#include <stdio.h>

int main() {
    int c, tc = 0, ec = 0, sc = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\t') ++tc;
        if (c == ' ') ++sc;
        if (c == '\n') ++ec;
    }
    printf("tabs count: %d, spaces count: %d, enters count: %d\n", tc, sc, ec);
    return 0;
}
