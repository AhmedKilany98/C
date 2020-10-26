//*************************************************
//  File    : For Loop in C.c
//  URL     : https://bit.ly/2RRmDbc      
//  Author  : Ahmed Kilany               
//  Date    : 06/09/2020                 
//  Version : V01                        
//**************************************************
 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for(long i=a;i<=b;i++)
    {
        if(i>=1 && i<=9)
        {
            if(i==1) puts("one");
            else if(i==2) puts("two");
            else if(i==3) puts("three");
            else if(i==4) puts("four");
            else if(i==5) puts("five");
            else if(i==6) puts("six");
            else if(i==7) puts("seven");
            else if(i==8) puts("eight");
            else if(i==9) puts("nine");
        }
        else 
        {
            if(i%2==0)
            {
                puts("even");
            }
            else 
            {
                puts("odd");
            }
        }
    }
    return 0;
}


