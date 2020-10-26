/*****************************************/
/*  File    : Array Manipulation.cpp     */
/*  Author  : Ahmed Kilany               */
/*  Date    : 21/09/2020                 */
/*  Version : V01                        */
/*****************************************/
 
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

long long int arr[10000005]={0} ,Darr[10000005]={0}, m=0 , mx=0 , a=0,b=0,k=0,n=0;
int main()
{

    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b>>k;
        Darr[a] += k;
        Darr[b+1] -= k;
    }

    for(int i=0;i<n+1;i++)
    {
        if( i == 0 )
        {
            arr[i] = Darr[i];
            mx = max(arr[i],mx);
        }
        else
        {
            arr[i] = Darr[i] + arr[i-1];
            mx = max(mx,arr[i]);
        }
    }
    cout<<mx<<endl;

    return 0;
}
