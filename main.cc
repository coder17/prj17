#include <stdio.h>
#include "plot.h"


int main(int argc, char **argv)
{
	Plot p;

	p.set_name("Valery");
	p.set_age(10);
	printf("name: %s, age: %d\n", p.get_name(), p.get_age());

	return 0;
}
