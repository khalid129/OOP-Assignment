#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class car
{
	int speed,nfdoor,gear,hpower;
	string color;
	static string machine; 
public:
	car(){}
	car(int s,int nd,int g,int hp,string c):speed(s),nfdoor(nd),gear(g),hpower(hp),color(c){}
	car(int nd,string c):nfdoor(nd),color(c){}
	void accelerate()
	{speed=speed+1;}
	int accelerate(int x)
	{speed=speed+x;
	cout<<"speed is "<<speed<<endl;}
	bool ismoving(int s)
	{
	if(s==0)
	{return true;}
	else
		return false;
	}
	void showdata()
	{
		cout<<"speed of car is "<<speed<<endl;
		cout<<"color of car is "<<color<<endl;
		cout<<"hours popwer of car is "<<hpower<<endl;
		cout<<"no of door of the car is "<<nfdoor<<endl;
		cout<<"gear in car is "<<gear<<endl;
	}
};
int main()
{
	bool b;
	car c1,c2,c3(56,4,5,2000,"black");
	c3.accelerate();
	c3.accelerate(70);
	b=c3.ismoving(0);
	cout<<b;
	c3.showdata();
	getch();
	return 0;
}
