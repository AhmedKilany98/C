/*****************************************/
/*  File    : Hello World! in C.c        */
/*  URL     : https://bit.ly/35bldAo     */
/*  Author  : Ahmed Kilany               */
/*  Date    : 06/09/2020                 */
/*  Version : V01                        */
/*****************************************/
 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	printf("Hello, World! \n%s",s);  
    return 0;
}

