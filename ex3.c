#include <stdio.h>

int main()
{
    int age = 12;
    int height = 72;

    printf("I am %d years old.\n", age);
    printf("I am %d inches tall.\n", height);

    //more variable priting
    unsigned int age_2 = 50;
    signed int percent_1 = -100;

    printf("I am %d years old.\n", age_2);
    printf("wololo %d %%\n", percent_1);
    printf("+wololo %u %%\n", percent_1);

    double to_double = 1234.12;

    //exponent form
    printf("we double now %e\n", to_double);
    //mirrored form?
    printf("we double now %g\n", to_double);
    return 0;
}
