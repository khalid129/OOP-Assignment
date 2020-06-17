#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	private:
		int a,b;
	public:
		void set_data(int x,int y)
		{x=a;y=b;}
		void show_data()
	{ cout<<"a="<<x<<","<<"b="<<y;}
};
int  main()
{
	complex c1;
	int a,b;
	c1.set_data(3,4);
			{ cout<<"a="<<a<<","<<"b="<<b;}
	return 0;
}
