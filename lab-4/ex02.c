#include<stdio.h>
int main()
{
int num = 1;
float numinput, tot, avg;
tot = 0;
while (num<= 10){
printf (" %d. Enter the number: ", num);
scanf (" %f", &numinput);
tot = numinput + tot;
avg = tot/num;
num++;
}
printf ("Total sum is %.0f\n", tot);
printf ("Average is %.2f\n", avg);
return 0;
}