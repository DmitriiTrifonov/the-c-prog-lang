#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("This is a temperature conversion table:\n");
    printf("Fahrnheit\tCelsius\n"); // \t is used for tab
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0); // conversion formula 
        printf("%3.0f\t\t%6.1f\n",fahr, celsius); // formatted output
        fahr = fahr + step;
    }
    return 0;
}
