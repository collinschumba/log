#include "log.h"

void log(std::ostream& out, std::stringstream& ss)
	//do we use ostream or ionsstream??
{
	out << ss.str();
	return;
}
