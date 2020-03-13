#include <stdio.h>


int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower; // set celsius to 0
    printf("This is a temperature conversion table:\n"); // header
    printf("Celsius\tFahrenheit\n"); // \t is used for tab
    while (celsius <= upper)
    {
        fahr = (9.0 / 5.0) * celsius + 32.0; // conversion formula 
        printf("%3.0f\t%6.0f\n",celsius,fahr); // formatted output
        celsius = celsius + step;
    }
    return 0;
}
