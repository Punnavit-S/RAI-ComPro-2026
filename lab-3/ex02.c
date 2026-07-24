#include<stdio.h>
int main()
{
    int num1;
float output;
printf ("Enter a number: ");
scanf (" %d", &num1);
if (num1 <= 100)
{
    if (num1 % 2 == 0)
    {
        printf ("even\n");
    }
    else
    {
        printf ("odd\n");
    }
}
else{
    printf (" %d  is out of range\n",num1);
}
return 0;
}
