#include <stdio.h>

int main(int argc, char *argv[]) {
    int i = 0;

    for(i=1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };

    int numstates = 6;

    for(i=0; i< numstates; i++){
        printf("State: %d: %s\n",
                i, states[i]);
    }

    return 0;
}
