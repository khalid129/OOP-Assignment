  #include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	private:
		int a,b;
	public:
		complex(int x,int y)//parameterized constructor
		{
		x=a; y=b;
		}
		complex(int z)
		{
			z=a;
		}
		complex()//default constructor
		{}
		~complex()
		{cout<<"destructor";
		}
};
void fun()
{
	complex obj;
}
main()
{
complex c1(3,4),c2(5);	
fun();	
getch();
return 0;
}
