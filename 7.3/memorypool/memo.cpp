#include "memopool.h"

int main()
{
	ActualClass* p1 = new ActualClass;
	p1->print();

	ActualClass* p2 = new ActualClass;
	p2->print();
	delete p1;

	p1 = new ActualClass;
	p1->print();

	ActualClass* p3 = new ActualClass;
	p3->print();

	delete p1;
	delete p2;
	delete p3;

	system("pause");
	return 0;
}
