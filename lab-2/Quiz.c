

#include <stdio.h>

int main (){
    char subject1[] = "programming";
    char grade1[] = "A";
    float numgrade1, numgrade2, numgrade3, numgrade4;
    if(grade1 == "A"){
        numgrade1 = 4.0;
        return numgrade1;
    }
    float GPS;
    numgrade1 = 4;
    numgrade2 = 3.5;
    numgrade3 = 3.5;
    numgrade4 = 3;

    GPS = (numgrade1+numgrade2+numgrade3+numgrade4)/4;
    
    printf("%-14s:%2s\n",subject1,"A");
    printf("%.2f\n",numgrade1);

    printf("%-14s:%3s\n","Drawing","B+");

    printf("%-14s:%3s\n","Mechanics","B+");

    printf("%-14s:%2s\n","Math","B");

    printf("%-14s:%4.1f\n","GPS",GPS);
    return 0;
}