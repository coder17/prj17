#include <stdio.h>
#include "plot.h"
#include "plot_pp.h"


int main(int argc, char **argv)
{
	Plot p1;

	p1.set_name("Valery");
	p1.set_age(10);
	printf("1 name: %s, age: %d\n", p1.get_name(), p1.get_age());

	Plot p2("Fred");
	p1 = p2;
	printf("1 name: %s, age: %d\n", p1.get_name(), p1.get_age());

	PlotPP pp;
	pp.set_name("Kolian");
	pp.up_name();
	printf("name: %s\n", pp.get_name());

	return 0;
}
