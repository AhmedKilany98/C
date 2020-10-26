/***************************************************
  File    : Pointers in C.c 
  URL     : https://bit.ly/2FPR4ME
  Author  : Ahmed Kilany               
  Date    : 06/09/2020                 
  Version : V01                        
***************************************************/
 
#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    int x =*a , y=*b;
    *a= x+y;
    *b= abs(x-y);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}



