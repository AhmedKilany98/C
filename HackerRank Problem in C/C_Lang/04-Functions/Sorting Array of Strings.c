//*************************************************
//  File    : Sorting Array of Strings.c
//  URL     : https://bit.ly/2EmGCLM      
//  Author  : Ahmed Kilany               
//  Date    : 06/09/2020                 
//  Version : V01                        
//**************************************************
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
    if(strcmp(a, b)<0)
        {
            return 0;
        }
    else {
        return 1;
    }

    // if (a[0] < b[0])
    //     return 0;
    // else return 1;
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    // if (a[0] > b[0])
    //     return 0;
    // else return 1;
    if(strcmp(a, b)>0)
        {
            return 0;
        }
    else {
        return 1;
    }
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int i=0 , c=0,d=0,arr_A[27]={0};
    for(i=0;i<strlen(a);i++)
    {
        arr_A[a[i]-'a']++;
    }
    for(i=0;i<27;i++)
    {
        if(arr_A[i]>0)
        {
            c++;
            arr_A[i]=0;
        }
    }
    for(i=0;i<strlen(b);i++)
    {
        arr_A[b[i]-'a']++;
    }
    for(i=0;i<27;i++)
    {
        if(arr_A[i]>0)
        {
            d++;
            arr_A[i]=0;
        }
    }
    if (c < d)return 0;
    else if(c == d) return lexicographic_sort(a,b);
    else return 1;
}

int sort_by_length(const char* a, const char* b) {
    if(strlen(a) < strlen(b))
        return 0;
    else if(strlen(a) == strlen(b))
        return lexicographic_sort(a,b);
    else
        return 1;
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    // Selection Sort::
    int i=0 , j=0,min_idx;
    char *str1 , *str2;
    for (i=0; i<len; i++)
    {
        for(j=i+1; j<len; j++)
        {

            if(cmp_func(arr[j],arr[i]) == 0)
            {
                str1 = arr[j];
                arr[j] = arr[i];
                arr[i] = str1;
            }
        }
    }
}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}

