#ifndef PRATICE_H
#define PRATICE_H
using namespace std;
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void display(box a)
{
	cout << "maker" << a.maker << endl;
	cout << "height" << a.height<<endl;
	cout << "width" << a.width<<endl;
	cout << "length" << a.length<<endl;
	cout << "volume" << a.volume << endl;
}
void dis_vol(box &a)
{
	a->volume =a->height * a->width * a->length;
}


#endif
