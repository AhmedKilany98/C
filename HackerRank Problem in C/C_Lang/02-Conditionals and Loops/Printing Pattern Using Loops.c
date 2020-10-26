//*************************************************
//  File    : Printing Pattern Using Loops.c
//  URL     : https://bit.ly/3cneAfL      
//  Author  : Ahmed Kilany               
//  Date    : 06/09/2020                 
//  Version : V01                        
//*************************************************
 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
int n=5,a,i=0,x,j,k;
    scanf("%d", &n);
      // Complete the code to print the pattern.
    for( a=0;a<(n*2)-1;a++,i++)
    {
        if (a > (n*2-2)/2)
        {
            i = (n*2-2)-a;
        }
        
        for(x=0;x < i;x++)
        {
            printf("%d ",n-x);
        }

        for( j=0;j < ((n*2-1)-(2*x));j++)
        {
            printf("%d ",n-x);
        }
 
        for ( k=0;k < x;k++)
        {
            printf("%d ",(n-(x-1))+k);
        }
        printf("\n");
    }
    return 0;
}

