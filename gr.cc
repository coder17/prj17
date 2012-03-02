#include <stdio.h>
#include "gr.h"

void draw_line(int x, int y, int len)
{
	int i;

	for(i=0; i<y; i++)
		printf("\n");

	for(i=0; i<x; i++)
		printf(" ");

	for(i=0; i<len; i++)
		printf("*");
}
void draw_rect(int x, int y, int w, int h)
{
	int i, j;

	for(i=0; i<y; i++)
		printf("\n");

	for(i=0; i<h; i++)	{
		for(j=0; j<x; j++)
			printf(" ");

		for(j=0; j<w; j++)
			printf("*");

		printf("\n");
	}
}
