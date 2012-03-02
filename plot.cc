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
