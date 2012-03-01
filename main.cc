#include <stdio.h>
#include "alg8.h"


int main(int argc, char **argv)
{
	NATION *n = create_nation(5);

	set_man(n, 0, "Thomas", 19, 1, 1934);
	print_man(n, 0, "nation1");

	kill_nation(n);

	return 0;
}
