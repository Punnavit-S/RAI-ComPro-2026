#include<stdio.h>
int main()
{
int num = 1;
int numinput;
do{
printf ("Enter the number: ");
scanf (" %d", &numinput);
if (numinput % 2 == 0)
    {
        printf (" %d is even\n", numinput);
    }
    else
    {
        printf (" %d is odd\n", numinput);
    }
num++;
}while (numinput!= 0);
printf ("Exiting Program... Bye\n");
return 0;
}