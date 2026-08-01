#include<stdio.h>
int main()
{
float num1, num2;
printf ("Enter a number: ");
scanf ("%f", &num1);
printf ("Enter a number: ");
scanf ("%f", &num2);
if (num2 != num1)
printf ("Does not match. Try again\n");
else
printf ("Match\n");
return 0;
}