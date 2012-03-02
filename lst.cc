#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lst.h"


PUPIL_LIST* create_pupil_list()
{
	PUPIL_LIST* pl = (PUPIL_LIST*) malloc(sizeof(PUPIL_LIST));

	pl->head = NULL;
	pl->tail = NULL;

	return pl;
}

void add_pupil(PUPIL_LIST* pl, const char *name, int age, int num)
{
	PUPIL_ITEM *pi = (PUPIL_ITEM*) malloc(sizeof(PUPIL_ITEM));

	strcpy(pi->data.name, name);
	pi->data.age = age;
	pi->data.num = num;
	pi->next = NULL;
	
	if(pl->tail)
		pl->tail->next = pi;

	pl->tail = pi;

	if(!pl->head)
		pl->head = pi;
}

void print_all_pupils(PUPIL_LIST* pl)
{
	PUPIL_ITEM *pi;
	int i;

	pi = pl->head;
	i = 0;

	while(pi)	{
		printf("\npupil[%d]: name: %s, age: %d, num: %d\n", i + 1, pi->data.name, pi->data.age, pi->data.num);	
		pi = pi->next;	
		i++;
	}
}

void delete_pupil_list(PUPIL_LIST* pl)
{
	PUPIL_ITEM *pi;

	pi = pl->head;

	while(pi)	{
		pl->head = pi;
		pi = pi->next;
		free(pl->head);
	}

	free(pl);
}
