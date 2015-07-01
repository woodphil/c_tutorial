#include <stdio.h>

int main(int argc, char *argv[]) {
    int i = 0;

    if(argc==1) {
        printf("you suck");
    } else if(argc>1 && argc<4) {
        for(i = 0; i < argc; i++) {
            printf("%s\n", argv[i]);
        }
    } else {
        printf("you suck+");
    }

    return 0;
}
