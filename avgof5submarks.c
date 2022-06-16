/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
    float phy,chem,math,cs,eng,sum,avg;
    printf("Enter Physics marks: ");
    scanf("%f",&phy);
    printf("Enter Chemistry marks: ");
    scanf("%f",&chem);
    printf("Enter Mathematics marks: ");
    scanf("%f",&math);
    printf("Enter CS marks: ");
    scanf("%f",&cs);
    printf("Enter English marks: ");
    scanf("%f",&eng);
    sum = phy + chem + math + cs + eng;
    avg = sum/5;
    printf("The average is %.2f",avg);
    return 0;
}
