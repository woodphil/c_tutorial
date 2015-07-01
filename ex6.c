#include <stdio.h>

int main(int argc, char *argv[]) {
    int distance = 100;
    float power = 2.345f;
    double super_power = 56789.4321;
    char i = 'W';
    char first_name[] = "Phil";
    char last_name[] = "Park";

    printf("%d miles away\n", distance);
    printf("%f levels of power\n", power);
    printf("%f levels of supower\n", super_power);
    printf("initial %c\n", i);
    printf("full name is %s %c %s\n", first_name, i, last_name);

    return 0;
}
