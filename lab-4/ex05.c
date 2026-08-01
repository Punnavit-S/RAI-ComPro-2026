#include<stdio.h>
int main()
{
int num, numinput;
int tot = 0;
printf ("Enter a number: ");
scanf (" %d", &numinput);
tot = numinput;
for (num = 1; num <= (numinput-1); num++){
tot = tot * (num);
}
printf (" Factorial of %d is %d\n", numinput, tot);
return 0;
}