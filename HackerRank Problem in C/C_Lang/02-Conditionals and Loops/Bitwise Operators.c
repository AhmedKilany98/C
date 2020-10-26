//*************************************************
//  File    : Bitwise Operators.c
//  URL     : https://bit.ly/3mJ4KcT      
//  Author  : Ahmed Kilany               
//  Date    : 06/09/2020                 
//  Version : V01                        
//*************************************************
 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int and=0,or=0,xor=0,x=0;
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            x= i&j;
            if(x<k && x>=and)and = x;
            x= i|j;
            if(x<k && x>=or) or = x;
            x= i^j;
            if(x<k && x>=xor)xor = x;
        }
    }
    printf("%d\n%d\n%d",and,or,xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

