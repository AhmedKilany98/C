//*************************************************
//  File    : Boxes through a Tunnel.c
//  URL     : https://bit.ly/3mDjGJH      
//  Author  : Ahmed Kilany               
//  Date    : 06/09/2020                 
//  Version : V01                        
//**************************************************
 
#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box
{
	/**
	* Define three fields of type int: length, width and height
	*/
    int length , width,height;
};

typedef struct box box;

int get_volume(box b) {
	/**
	* Return the volume of the box
	*/
    
    return (b.height * b.width * b.length);
}

int is_lower_than_max_height(box b) {
	/**
	* Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
	*/
    return (b.height < MAX_HEIGHT)?get_volume(b):0;
}

int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}

