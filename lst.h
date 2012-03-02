#pragma once

struct PUPIL	{
	char name[32];
	int age;
	int num;
};

struct PUPIL_ITEM	{
	PUPIL data;
	PUPIL_ITEM *next;
};

struct PUPIL_LIST	{
	PUPIL_ITEM *head;
	PUPIL_ITEM *tail;
};


PUPIL_LIST* create_pupil_list();
void add_pupil_tail(PUPIL_LIST* pl, const char *name, int age, int num);
void add_pupil_head(PUPIL_LIST* pl, const char *name, int age, int num);
void print_all_pupils(PUPIL_LIST* pl);
void delete_pupil_list(PUPIL_LIST* pl);

