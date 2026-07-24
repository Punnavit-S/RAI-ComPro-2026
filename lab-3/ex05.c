#include<stdio.h>
int main (){
    float r, h, vol, vollim;
    printf("Enter cone height: ");
    scanf("%f", &h);
    printf("Enter cone base radius: ");
    scanf("%f", &r);
    vol = 3.14/3*r*r*h;

    printf("Cone volume = %.1f\n", vol);
    vollim = 260;
    if (vol > vollim)
    {
        printf("this cone is perfect for Supun project\n");
    }
    else
    {
        printf("This cone is not fit for this project\n");
    }
    return 0;
}
