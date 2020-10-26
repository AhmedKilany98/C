/*********************************************************/
/*  File    : Functions in C.c                           */
/*  URL     : https://bit.ly/2RLX37H                     */
/*  Author  : Ahmed Kilany                               */
/*  Date    : 06/09/2020                                 */
/*  Version : V01                                        */
/*********************************************************/
 
#include <cstdio>
#include <stdlib>

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_two(int a,int b)
{
    if(a>=b) return a;
    else return b;
}
int max_of_four(int a, int b, int c, int d)
{
    return max_of_two(a,max_of_two(b,max_of_two(c,d)));
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}



