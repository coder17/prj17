#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gr.h"


void func_m()
{
	int a[10];
	int b[10];
	int c[10];
	int i;

	srand((unsigned) time(NULL));
	for(i=0; i<10; i++)	{
		a[i] = rand();
		b[i] = rand();
		c[i] = rand();
	}
}
