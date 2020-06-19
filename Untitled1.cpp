#include<iostream>
using namespace std;
class A
{
	int i;
public:
	void set(int a)
	{
		i=a;
	}
virtual void fun()
{
	cout<<"i am in class A";
}	
};
class B:public A
{
	int i;
	public:
		void set(int a)
	{
		i=a;
	}
virtual void fun()
{
	cout<<"i am in class B";
}	
};
main()
{
	A o1,*p;
	B o2;
	o2=o1.set(3);
	/*p=&o2;
	p->fun();
	//o1.fun();
	//o2.fun();
	//getch();*/
}
