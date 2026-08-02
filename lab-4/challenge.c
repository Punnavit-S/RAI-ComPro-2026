#include<stdio.h>
int main()
{
    int num1;
float money, dep;
printf ("====== ATM MENU ======\n");
printf ("1. Check Balance\n");
printf ("2. Deposit Money\n");
printf ("3. Withdraw Money\n");
printf ("4. Exit\n");
printf ("Choose an option: ");
scanf (" %d", &num1);

do{
    if (num1 == 1)
    {
        printf ("Current Balance:  %.2f\n", money);
        
    }
    else if (num1 == 2)
    {
        printf ("Enter amount to deposit: ");
        scanf (" %f", &dep);
        money =  money + dep;
        
    }
    else if (num1 == 3)
    {
        printf ("Enter amount to withdraw: ");
        scanf (" %f", &dep);
        if (dep > money)
        {
            printf ("Withdrawal failed, not enough money in the account.\n");
            
        }
        else
        {
            money =  money + (dep*(-1));
            printf ("Withdrawal successful.\n");
        }
    }


    else{
        printf ("Invalid input.\n");

    }
    num1 = 0;
    printf ("====== ATM MENU ======\n");
    printf ("1. Check Balance\n");
    printf ("2. Deposit Money\n");
    printf ("3. Withdraw Money\n");
    printf ("4. Exit\n");
    printf ("Choose an option: ");
    scanf (" %d", &num1);

}while (num1 != 4);
printf ("Thank you for using the ATM.\n");
return 0;
}