#include <stdio.h>
#include "alg8.h"
#include "lst.h"
#include "gr.h"


int main(int argc, char **argv)
{
	NATION *n = create_nation(5);

	set_man(n, 0, "Thomas", 19, 1, 1934);
	print_man(n, 0, "nation1");

	kill_nation(n);

	PUPIL_LIST *pl = create_pupil_list();
	add_pupil_tail(pl, "Sam", 11, 435);
	add_pupil_tail(pl, "Tom", 13, 6456);
	add_pupil_tail(pl, "Max", 10, 543);
	add_pupil_tail(pl, "Sid", 15, 866);
	add_pupil_tail(pl, "Jeremy", 14, 34);
	add_pupil_tail(pl, "Vanessa", 8, 423);
	add_pupil_tail(pl, "Kate", 9, 7665);
	add_pupil_head(pl, "Rody", 19, 444);
	add_pupil_head(pl, "Karl", 29, 555);
	add_pupil_head(pl, "Irvin", 39, 666);
	print_all_pupils(pl);
	delete_pupil_list(pl);

	//draw_line(5, 5, 20);
	//draw_rect(3, 10, 7, 12);
	//draw_square(3, 10, 20);

	return 0;
}
