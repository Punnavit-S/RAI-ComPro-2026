#include<stdio.h>
int main()
{
    int age;
    float weight, height;
    char name[99], gender[2], EduQua[99];

    printf("Enter your Name: ");
    scanf("%[^\n]", name);
    printf("Enter your Age: ");
    scanf(" %d", &age);
    printf("Enter your height: ");
    scanf(" %f", &height);
    printf("Enter your weight: ");
    scanf(" %f", &weight);
    printf("Enter your gender: ");
    scanf(" %c", gender);
    printf("Enter your Education Qualification: ");
    scanf(" %[^\n]",EduQua);
    
    printf("Name : %s\n", name);
    printf("Age : %d\n", age);
    printf("Gender : %s\n", gender);
    printf("Height : %0.1f\n", height);
    printf("Weight : %0.1f\n", weight);
    printf("Education : %s\n", EduQua);

    return 0;
}