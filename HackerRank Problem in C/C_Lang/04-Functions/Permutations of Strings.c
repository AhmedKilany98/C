//*************************************************
//  File    : Permutations of Strings.c
//  URL     : https://bit.ly/2RLZQ0w      
//  Author  : Ahmed Kilany               
//  Date    : 06/09/2020                 
//  Version : V01                        
//**************************************************
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char**s,int l , int r)
{
    char *tmp;
    if (s[l] == s[r]) return;
    tmp = s[l];
    s[l] = s[r];
    s[r]= tmp;
}

void sort(char **s,int l,int r)
{
    // Selection Sort
    int i,j,min=0;
    for(i=l;i<r;i++)
    {
        for(j=i+1;j<r;j++)
        {
            if((strcmp(s[i],s[j])>0)) // s[i] > s[j]
            {
               swap(s,i,j);
            }
        }
    }
}

int closestString(char **s,int l , int r,int k)
{
    int i,min=l;
    for(i=l+1;i<r;i++)
    {
        if(strcmp(s[i],s[k])>0 && (strcmp(s[i],s[min])<0))// s[i]>s[k]; s[i] < s[min]
        {
                min = i;
        }
    }
    return min;
}

int next_permutation(int n, char **s)
{
    /**
    * Complete this method
    * Return 0 when there is no next permutation and 1 otherwise
    * Modify array s to its next permutation
    */
    int ivrse=0,x=0;
    ivrse = n-2;
    while((ivrse>=0) && (strcmp(s[ivrse],s[ivrse+1])==0 ||strcmp(s[ivrse],s[ivrse+1])>0))
        {
            --ivrse;
        }
    if(ivrse<0) return 0;
    else
    {
        x = closestString(s,ivrse+1,n,ivrse);
        swap(s,ivrse,x);
        sort(s,ivrse+1,n);
        return 1;
    }

}

