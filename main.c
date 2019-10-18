#include <stdio.h>

#define LOWER 0 /* нижняя граница таблицы */
#define UPPER 300 /* верхняя граница */
#define STEP 20 /* размер шага */

int main() {
    printf("Hello, World!\n");

    float fahr, celsius;
    int lower, upper, step;
    lower = 0; /* нижняя граница таблицы температур */
    upper = 300; /* верхняя граница */
    step = 20; /* шаг */
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf ("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    for (int fahr1 = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf ("%3d %6.1f\n", fahr1, (5.0/9.0) * (fahr1 - 32));
    int c;
    while ((c = getchar()) != EOF)
        putchar (c);
    return 0;
}