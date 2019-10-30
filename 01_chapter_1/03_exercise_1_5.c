#include <stdio.h>


int main() {
    int fahr;

    for (fahr = 300; fahr >= 0; fahr= fahr - 20) {
        // uses a formated output and formula now in printf()
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32)); 
    }
    return 0;
}
