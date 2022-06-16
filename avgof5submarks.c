/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
    int phy,chem,math,cs,eng,sum,avg;
    printf("Enter Physics marks: ");
    scanf("%d",&phy);
    printf("Enter Chemistry marks: ");
    scanf("%d",&chem);
    printf("Enter Mathematics marks: ");
    scanf("%d",&math);
    printf("Enter CS marks: ");
    scanf("%d",&cs);
    printf("Enter English marks: ");
    scanf("%d",&eng);
    sum = phy + chem + math + cs + eng;
    avg = sum/5;
    printf("The average is %d",avg);
    return 0;
}
