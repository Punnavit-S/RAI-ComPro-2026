#include<stdio.h>
int main()
{
int num;
float numinput, tot, avg;
tot = 0;
for (num = 1; num<= 10; num++ ){
printf (" %d. Enter the number: ", num);
scanf (" %f", &numinput);
tot = numinput + tot;
avg = tot/num;

}
printf ("Total sum is %.0f\n", tot);
printf ("Average is %.2f\n", avg);
return 0;
}