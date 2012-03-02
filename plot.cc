#include <string.h>
#include "plot.h"


Plot::Plot()
{
	strcpy(m_name, "no-name");
	m_age = 0;
	m_num = 0;
}

Plot::Plot(const char *name)
{
	strcpy(m_name, name);
	m_age = 0;
	m_num = 0;
}

Plot::~Plot()
{
}

void Plot::set_name(const char *name)
{
	strcpy(m_name, name);
}

char* Plot::get_name()
{
	return m_name;
}

void Plot::set_age(int age)
{
	m_age = age;
}

int Plot::get_age()
{
	return m_age;
}

void Plot::set_num(int num)
{
	m_num = num;
}

int Plot::get_num()
{
	return m_num;
}

