#ifndef MIKU_H_
#define MIKU_H_
class miku
{
private:
	char performers[50];
	char label[20];
	int selections;
	double playtime;
private:
	miku(char* p="NULL",char* l="NULL",int sele=0,double time=0.0 );
	miku();
	~miku();
	virtual void Report() const;
	miku& operator=(const miku& d);
};
class gakki:public miku
{
private:
	char content[80];
public:
	gakki(char* c="NULL", char* p = "NULL", char* l = "NULL", int sele = 0, double time = 0.0):miku(char* p, char* l, int sele, double time);
	virtual void Report() const;
	gakki& operator=(const gakki& d);
}
#endif 

