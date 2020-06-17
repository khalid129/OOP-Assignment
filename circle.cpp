#include<iostream>
#include<conio.h>
using namespace std;

class point
{
	protected:
		double xcord;
		double ycord;
	public:
		point()
		{}
		point(double x, double y):xcord(x),ycord(y)
		{}
		double getxcord()
		{
			return xcord;
		}
		void setxcord(double x)
		{
			xcord=x;
		}
		
		double getycord()
		{
			return ycord;
		}
		void setycord(double y)
		{
			ycord=y;
		}
		void showdata()
		{
			cout<<"x cordinate is"<<xcord<<endl;
		    cout<<"y cordinate is"<<ycord<<endl;
		}
};
class circle:public point
{
	private:
		double radius;
	public:
		circle(double x,double y,double r):point(x,y),radius(r)
		{}
		double getradius()
		{
			return radius;
		}
		void setradius(double r)
		{
			radius=r;
		}
		 void showdata()
		{
			cout<<"center of circle is"<<endl;
			point::showdata();
			cout<<"and radius of a circle is"<<radius<<endl;
		}
		double area()
		{
			return 3.14*radius*radius;
		}
		double circumference()
		{
			return 2*3.14*radius;	
		}
		
};

main()
{
	circle c1(4.5,6.7,9.1);
	//c1.showdata();
	c1.setxcord(3.1);
	c1.showdata();
	c1.setradius(9.78);
	cout<<"the area of circle is  "<<c1.area()<<endl;
	cout<<"the circumference of circle is  "<<c1.circumference();
	cout<<"enter new value in radius"<<endl;
	double a;
	cin>> a;
	c1.setradius(a);
	c1.getradius();
	c1.showdata();
	
	getch();
	return 0;

}
