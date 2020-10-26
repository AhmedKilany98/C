/*********************************************************/
/*  File    : Sum and Difference of Two Numbers.c        */
/*  URL     : https://bit.ly/3jK7p3Q                     */
/*  Author  : Ahmed Kilany                               */
/*  Date    : 06/09/2020                                 */
/*  Version : V01                                        */
/*********************************************************/
 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a , b ; float x , y;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&x,&y);
    printf("%d %d \n%.1f %.1f",a+b,a-b,x+y,x-y);
    
    return 0;
}



