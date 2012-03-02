#include <stdio.h>
#include "alg8.h"
#include "lst.h"


int main(int argc, char **argv)
{
	NATION *n = create_nation(5);

	set_man(n, 0, "Thomas", 19, 1, 1934);
	print_man(n, 0, "nation1");

	kill_nation(n);

	PUPIL_LIST *pl = create_pupil_list();
	add_pupil(pl, "Sam", 11, 435);
	add_pupil(pl, "Tom", 13, 6456);
	add_pupil(pl, "Max", 10, 543);
	add_pupil(pl, "Sid", 15, 866);
	add_pupil(pl, "Jeremy", 14, 34);
	add_pupil(pl, "Vanessa", 8, 423);
	add_pupil(pl, "Kate", 9, 7665);
	print_all_pupils(pl);
	delete_pupil_list(pl);

	return 0;
}
