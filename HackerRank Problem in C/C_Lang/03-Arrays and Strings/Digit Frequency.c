//*************************************************
//  File    : Digit Frequency.c
//  URL     : https://bit.ly/32R57du
//  Author  : Ahmed Kilany               
//  Date    : 06/09/2020                 
//  Version : V01                        
//**************************************************
 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char s[1001];
    int arr[10]={0};
    scanf("%[^\n]",s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            arr[s[i] -'0']++;
        }
    }
    for(int i=0;i<10;i++)printf("%d ",arr[i]);
    return 0;
}
