#include <stdio.h>

int main() {

    float fahr, cel;

    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    printf("\n Fahr -> Cel\n");

    while (fahr <= upper) {
        cel = (5.0/9.0) * (fahr - 32);
        printf("%3.0f\t%6.1f\n", fahr, cel);
        fahr += step;
    }


    printf("\n\n Cel -> fahr\n");

    cel = lower;

    while (cel <= upper) {
        fahr = (9.0/5.0) * cel + 32;
        printf("%3.0f\t%6.1f\n", cel, fahr);
        cel += step;
    }


    return 0;
}