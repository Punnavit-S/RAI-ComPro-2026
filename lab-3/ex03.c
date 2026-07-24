#include<stdio.h>
int main()
{
    int num1;
float output;
printf ("Enter a number: ");
scanf (" %d", &num1);

switch (num1 <= 100 && num1 >= 1)
{
    case 1:
        switch ((num1 % 2))
        {
            case 0: 
                printf ("even\n");
                break;
            case 1: 
                printf("odd\n");
                break;
        }
        break;
    case 0:
        printf (" %d  is out of range\n",num1);
        break;
}
return 0;
}