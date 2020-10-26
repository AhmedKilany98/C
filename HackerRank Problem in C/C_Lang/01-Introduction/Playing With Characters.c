/*****************************************/
/*  File    : Playing With Characters.c  */
/*  URL     : https://bit.ly/3lQd5ex     */
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
    char ch , arr[200] , s[1000];
    scanf(" %c",&ch);
    scanf(" %s",arr);
    scanf(" %[^\n]%*c", s);
    printf("%c\n",ch);
    printf("%s\n",arr);
    printf("%s",s);  
    return 0;
}



