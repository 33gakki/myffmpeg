#ifndef __CODEHEAD_H
#define __CODEHEAD_H
class Banknum
{
private:
	std::string name;
	int num;
	int	money;
public:
	Banknum(std::string p, int num, int money);
	Banknum();
	~Banknum();
	void Display(void);
	void Insert(int mon);
	void Spend(int mon);
};
#endif

