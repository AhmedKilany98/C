//*************************************************
//  File    : Sum of Digits of a Five Digit Number.c
//  URL     : https://bit.ly/3mTjjea      
//  Author  : Ahmed Kilany               
//  Date    : 06/09/2020                 
//  Version : V01                        
//*************************************************
 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n ,sum=0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    while(n)
    {
        sum += n%10;
        n /= 10;
    }
    printf("%d",sum);
    return 0;
}

