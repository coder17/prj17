#pragma once


struct MAN
{
	char name[32];
	int age;
	int gender;
	int year;
};

struct NATION
{
	MAN* men;
	int count;
};


NATION* create_nation(int count);
void set_man(NATION* nation, int index, char *name, int age, int gender, int year);
void set_man(NATION* nation, int index, MAN* man);
void print_man(NATION* nation, int index);
void kill_nation(NATION* nation);
