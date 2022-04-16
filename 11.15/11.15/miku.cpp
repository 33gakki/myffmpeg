#include "miku.h"
#include <cstring>

miku::miku(char* p = "NULL", char* l = "NULL", int sele = 0, double time = 0.0)
{
	strcpy_s(performers  ,p);
	label[20];
	selections;
	playtime;
}
miku::miku()
~miku()
void miku::Report() const
miku::miku& operator=(const miku& d)