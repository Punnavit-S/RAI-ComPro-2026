#include<stdio.h>
int main()
{
    char username[99], grade;
    int id;
    float sciscore, physcore, calcscore, avg;

    printf("Enter your Name: ");
    scanf("%[^\n]", username);
    printf("Enter your Calculus score: ");
    scanf(" %f", &calcscore);
    printf("Enter your Physics score: ");
    scanf(" %f", &physcore);
    printf("Enter your Science score: ");
    scanf(" %f", &sciscore);
    

    avg = (sciscore+physcore+calcscore)/3;

    if (avg >= 80 && avg<=100){
        grade = 'A';
    }
    else if (avg >= 70 && avg<80){
        grade = 'B';
    }
    else if (avg >= 60 && avg<70){
        grade = 'C';
    }
    else if (avg >= 50 && avg<60){
        grade = 'D';
    }
    else if (avg >= 0 && avg<50){
        grade = 'F';
    }

    printf("%s, Your average is %.2f. You got grade %c \n", username, avg, grade);

    return 0;
}