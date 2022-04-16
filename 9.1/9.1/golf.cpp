#include<iostream>
#include "golf.h"
using namespace std;
void setgolf(golf& g, const char* name, int hc)
{
	strcpy_s(g.fullname, name);
	g.handicap = hc;
}
int setgolf(golf& g)
{
    std::cout << "Enter fullname: ";
    std::cin.getline(g.fullname, Len);
    if (g.fullname[0])
    {
        std::cout << "Enter handicap: ";
        std::cin >> g.handicap;
        std::cin.get();
        return 1;
    }
    else
        return 0;
}
void handicap(golf& g, int hc)
{
	g.handicap = hc;
}
void showgolf(const golf& g)
{
	cout << "golf.name" << g.fullname << endl;
	cout << "golf.handicap" << g.handicap << endl;
}