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
    scanf("%d",&phy);
    scanf("%d",&chem);
    scanf("%d",&math);
    scanf("%d",&cs);
    scanf("%d",&eng);
    sum = phy + chem + math + cs + eng;
    avg = sum/5;
    printf("The average is %d",avg);
    return 0;
}
