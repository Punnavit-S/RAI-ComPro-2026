#include<stdio.h>
int main()
{
int num, numinput, tot;

printf ("Enter a number: ");
scanf (" %d", &numinput);

printf ("Multiplication Table for %d:\n", numinput);
for (num = 1; num<= 12; num++ ){
    
tot = numinput * num;

printf (" %d x %d = %d\n", numinput, num, tot);
}
return 0;
}