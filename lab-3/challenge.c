#include<stdio.h>
int main()
{
    char username[99], grade,prograde, phygrade, calcgrade;
    int id,proscore, physcore, calcscore;
    float avg, calcgradenum, phygradenum, progradenum;

    printf("Calculus score: ");
    scanf(" %d", &calcscore);
    printf("Physic score: ");
    scanf(" %d", &physcore);
    printf("compro score: ");
    scanf(" %d", &proscore);
    

    avg = (proscore+physcore+calcscore)/3;

    if (calcscore >= 80 &&  calcscore<100){
        calcgrade = 'A';
        calcgradenum = 4;
    }
    else if (calcscore >= 70 &&  calcscore<80){
        calcgrade = 'B';
        calcgradenum = 3;
    }
    else if (calcscore >= 60 && calcscore<70){
        calcgrade = 'C';
        calcgradenum = 2;
    }
    else if (calcscore >= 50 && calcscore<60){
        calcgrade = 'D';
        calcgradenum = 1;
    }
    else if (calcscore >= 0 && calcscore<50){
        calcgrade = 'F';
        calcgradenum = 0;

   }


    if (physcore >= 80 && physcore<100){
        phygrade = 'A';
        phygradenum = 4;
    }
    else if (physcore >= 70 && physcore<80){
        phygrade = 'B';
        phygradenum = 3;
    }
    else if (physcore >= 60 && physcore<70){
        phygrade = 'C';
        phygradenum = 2;
    
    }
    else if (physcore >= 50 && physcore<60){
        phygrade = 'D';
        phygrade = 1;
    
    }
    else if (physcore >= 0 && physcore<50){
        phygrade = 'F';   
        phygradenum = 0;
    }


    if (proscore >= 80 && proscore<100){
        prograde = 'A';
        progradenum = 4;
    
    }
    else if (proscore >= 70 && proscore<80){
        prograde = 'B';
        progradenum = 3;
    }
    else if (proscore >= 60 && proscore<70){
        prograde = 'C';
        progradenum = 2;
    }
    else if (proscore >= 50 && proscore<60){
        prograde = 'D';
        progradenum = 1;
    }
    else if (proscore >= 0 && proscore<50){
        prograde = 'F';
        progradenum = 0;
    }




    if (avg >= 80 && avg<=100){
        grade = 'A';
    }
    else if (avg >= 70 && avg<80){
        grade = 'B';
    }
    else if (avg >= 60 && avg<70){
        grade = 'C';
    }
    else if (avg >= 50 && avg<60){
        grade = 'D';
    }
    else if (avg >= 0 && avg<50){
        grade = 'F';
    }
    
    printf("%-14s%2s%8s%8s\n","subject","Score","Grade","Grade");

        printf("--------------------------------------\n");
    
    printf("%-14s %2d %6c %8.1f\n","Cal", calcscore, calcgrade, calcgradenum);

    printf("%-14s %2d %6c %8.1f\n","Physics", physcore, phygrade, phygradenum);

    printf("%-14s %2d %6c %8.1f\n","compro", proscore, prograde, progradenum);


    return 0;
}