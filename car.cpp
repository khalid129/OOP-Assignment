#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class car
{
private:
string brandname,color;
double newprice,odometer,secprice;
public:
car()
{}
car(string b,string c,double p,double a,double s):brandname(b),color(c),newprice(p),odometer(a),secprice(s)
{}
void setbrandname(string b)
{
	brandname=b;
}
string getbrandname()
{
	return brandname; 
}
void setcolor(string c)
{
	color=c;
}
string getcolor()
{
	return color; 
}
void setnewprice(double p)
{
	newprice=p;
}
double getnewprice()
{
	return newprice ; 
}
void setodometer(double a)
{
	odometer=a;
}
long int getodometer(double a)
{ 
	return odometer; 
}
void showdata()
{
	cout<<"your car name is "<<brandname<<endl;
	cout<<"your car color is "<<color<<endl;
	cout<<"your car newprice is "<<newprice<<endl;
	cout<<"your car odometer is "<<odometer<<endl;
	cout<<"your second price is "<<(1-odometer/600000)*newprice;
}
};
main()
{
string b,c;
double p,a,s;	
car c1(b,c,p,a,s);
	cout<<"Enter your car brand, color, new price and odometer reading"<<endl;
	cin>>b;
	c1.setbrandname(b);
	cin>>c;
	c1.setcolor(c);
	cin>>p;
	c1.setnewprice(p);
	cin>>a;
	c1.setodometer(a);
	c1.showdata();
	getch();
	return 0;
}
