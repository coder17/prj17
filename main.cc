#include <stdio.h>
#include "plot.h"


int main(int argc, char **argv)
{
	Plot p;

	p.set_name("Valery");
	printf("name: %s\n", p.get_name());

	return 0;
}
