#include <ctype.h>
#include "plot_pp.h"


void PlotPP::up_name()
{
	for(int i=0; m_name[i]; i++)
		m_name[i] = (char) toupper(m_name[i]);
}
