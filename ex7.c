#include <stdio.h>

int main(int argc, char *argv[]) {
    int bugs = 100;
    double bug_rate = 1.2;

    printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);

    long uni_defect = 1L * 1024L * 1024L * 1024L;
    printf("uni has %ld bugs.\n",
            uni_defect);

    double exp_bugs = bugs * bug_rate;
    printf("expected bugs are %f.\n",
            exp_bugs);

    double part_of_uni = exp_bugs / uni_defect;
    printf("this is only %e portion of uni.\n",
            part_of_uni);

    //makes no sense
    char nul_byte = '\0';
    int care_percent = bugs * nul_byte;
    printf("you should care %d%%.\n",
            care_percent);

    return 0;
}
    
