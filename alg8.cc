#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "alg8.h"



NATION* create_nation(int count)
{
	NATION *n = (NATION*) malloc(sizeof(NATION));
	n->count = count;

	if(count)
		n->men = (MAN*) malloc(sizeof(MAN) * count);

	return n;
}

void set_man(NATION* nation, int index, const char *name, int age, int gender, int year)
{
	if(index > -1 && index < nation->count)	{
		strcpy(nation->men[index].name, name);	
		nation->men[index].age = age;
		nation->men[index].gender = gender;
		nation->men[index].year = year;
	}
}

void set_man(NATION* nation, int index, MAN* man)
{
	if(index > -1 && index < nation->count)	{
		strcpy(nation->men[index].name, man->name);	
		nation->men[index].age = man->age;
		nation->men[index].gender = man->gender;
		nation->men[index].year = man->year;
	}
}

void print_man(NATION* nation, int index, const char *prefix)
{
	if(index > -1 && index < nation->count)
		printf("\n%s:MAN[%d]: name: %s, age: %d, gender: %s, year: %d\n", prefix, index + 1, nation->men[index].name,
		nation->men[index].age, nation->men[index].gender == 1 ? "male" : "female", nation->men[index].year);
}

void kill_nation(NATION* nation)
{
	if(nation->count)
		free(nation->men);

	free(nation);
}
