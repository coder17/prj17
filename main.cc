#include <stdio.h>
#include "plot.h"
#include "plot_d.h"


int main(int argc, char **argv)
{
	Plot p1;

	p1.set_name("Valery");
	p1.set_age(10);
	printf("1 name: %s, age: %d\n", p1.get_name(), p1.get_age());

	Plot p2("Fred");
	p1 = p2;
	printf("1 name: %s, age: %d\n", p1.get_name(), p1.get_age());

	PlotD pd;
	pd.set_name("Slim");
	pd.set_age(24);
	pd.set_num(445);
	printf("name: %s, birth: %d\n", pd.get_name(), pd.count_birth(2012));

	return 0;
}
