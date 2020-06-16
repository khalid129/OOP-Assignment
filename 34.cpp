#include<iostream>
#include<conio.h>
using namespace std;
class door
{
	public:
		static int op;b
	void showdata()
	{
		cout<<"hahahaha";
	}
};door::op;w
class room:public door
{
	public:
		void showdata()
		{
		//	door::showdata();
			cout<<"lalalala";
		}
};

int main()
{
	room a;
	a.showdata();
	return 0;
}
