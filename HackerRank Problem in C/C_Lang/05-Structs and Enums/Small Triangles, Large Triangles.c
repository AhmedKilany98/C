//*************************************************
//  File    : Small Triangles, Large Triangles.c
//  URL     : https://bit.ly/3iU1Tvf      
//  Author  : Ahmed Kilany               
//  Date    : 06/09/2020                 
//  Version : V01                        
//**************************************************
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    triangle temp;
    double min=0, p =0, vol1=0,vol2=0;

    
    for(int i=0;i<n;i++)
    {
        
        for(int j=i+1;j<n;j++)
        {
            p=(tr[i].a+tr[i].b+tr[i].c)/2.0;
            vol1 = p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c);

            p=(tr[j].a+tr[j].b+tr[j].c)/2.0;
            vol2 = p*(p-tr[j].a)*(p-tr[j].b)*(p-tr[j].c);
            if(vol1>vol2)
            {
                // printf("vol1= %d , vol2= %d \n",vol1,vol2); 
                temp= tr[j];
                tr[j] = tr[i];
                tr[i] = temp;
                
            }
            
        }
        
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}

