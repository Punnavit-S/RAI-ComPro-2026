#include <stdio.h>

int main (){

    printf("+----------------+--------+--------+\n");
    printf("|");
    printf("%-16s","Name");
    printf("|");
    printf("%8s","Score1");
    printf("|");
    printf("%8s","Score2");
    printf("|\n");
    printf("+----------------+--------+--------+\n");
    printf("|");
    printf("%-16s","Alice");
    printf("|");
    printf("%8d",85);
    printf("|");
    printf("%8d",90);
    printf("|\n");
    printf("|");
    printf("%-16s","Bob");
    printf("|");
    printf("%8d",78);
    printf("|");
    printf("%8d",82);
    printf("|\n");
    printf("|");
    printf("%-16s","Charlie");
    printf("|");
    printf("%8d",92);
    printf("|");
    printf("%8d",88);
    printf("|\n");
    printf("+----------------+--------+--------+\n");
    return 0;
}