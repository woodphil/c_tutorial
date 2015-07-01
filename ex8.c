#include <stdio.h>

int main(int argc, char *argv[]) {
    char full_name[] = {
        'P','h','i','l',
        ' ','P'
    };
    int area[] = {10,12,13,14,20};
    char name[] = "Phil";

    //Warning sometimes this %ld messes up with certain systems because it uses unsigned ints
    printf("The size of an int; %ld\n", sizeof(int));
    printf("The size of areas (int[]): %ld\n",
            sizeof(area));
    printf("The number of ints in areas: %ld\n",
            sizeof(area) / sizeof(int));
    printf("The first area is %d, second is %d\n",
            area[0], area[1]);

    printf("The size of char is %ld\n", sizeof(char));
    printf("The size of name (char[]) is %ld\n", sizeof(name));
    printf("The number of chars is %ld\n", sizeof(name)/sizeof(char));

    printf("The size of full name (char[]) %ld\n",
            sizeof(full_name));
    printf("The number of chars is %ld\n",
            sizeof(full_name)/sizeof(char));

    printf("name=\"%s\" and full name = \"%s\"",
            name, full_name);

    return 0;
}

