#include<stdio.h>
int main()
{
    
    int age;
    float height;
    char firstname[99], lastname[99], uniname[99];

    printf("Enter your full name: ");
    scanf(" %s %s", firstname, lastname);
    printf("Enter your age: ");
    scanf(" %d", &age);
    printf("Enter your height: ");
    scanf(" %f", &height);
    printf("Enter your Unviersity name: ");
    scanf(" %[^\n]",uniname);



    printf("Hi! Everyone. This is %c.%s from %s. I am %d years old and my height is %.1f cm tall. \n", lastname[0], firstname, uniname, age, height);
}