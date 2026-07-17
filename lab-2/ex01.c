#include <stdio.h>

int main (){
    int num;
    float F;
    char character;
    printf("Please enter a integer value: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    printf("Please enter a float value: ");
    scanf("%f",&F);
    printf("You entered a float value: %0.1f\n", F);
    printf("Please enter a character: ");
    scanf(" %c",&character);
    printf("You entered: %c\n", character);
    return 0;
}