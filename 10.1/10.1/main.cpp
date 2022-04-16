#include <iostream>
#include "codehead.h"
int main(void)
{
	Banknum client1("gakki", 123456, 3241325);
	client1.Display();
	client1.Insert(42334);
	client1.Display();
	client1.Spend(43244);
	client1.Display();

}