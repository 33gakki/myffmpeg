#include <iostream>
#include "codehead.h"
#include <cstring>
Banknum::Banknum(std::string p, int nu, int mon)
{
	name=p;
	num = nu;
	money = mon;

}
Banknum::Banknum()
{
	name = "";
	num = 0;
	money = 0;
}
Banknum::~Banknum()
{

}
void Banknum::Display()
{
	std::cout << "name:" << name << std::endl;
	std::cout << "num:" << num << std::endl;
	std::cout << "money:" << money << std::endl;
}
void Banknum::Insert(int mon)
{
	money += mon;
}
void Banknum::Spend(int mon)
{
	money -= mon;
}