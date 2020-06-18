#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class fan
{
	private:
		int speed;
		double radius;
		string color;
		int status;
	public:
		fan()
		{}		
		fan(int s,double r,string c,int t):speed(s),radius(r),color(c),status(t)
		{}
		void setspeed(int s)
		{
			speed=s;
		}
		int getspeed()
		{
			if(speed==1){cout<<"The fan speed is fast"<<endl;}
			else if(speed==2){cout<<"The fan speed is medium"<<endl;}
			else {cout<<"THe fan speed is slow"<<endl;}
			return speed;	
		}
		void setradius(double r)
		{
		radius=r;	
		}		
		double getradius()
		{
			cout<<"Your fan radius is "<<radius<<" cm";
			return radius;
		}
		void setcolor(string c)
		{
			color=c;
		}
		string getcolor()
		{
			return color;
		}
		void setstatus(int t)
		{
			status=t;
		}
		int getstatus()
		{
			if(status==1)
			cout<<"your fan is ON"<<endl;
			else
			cout<<"your fan is OFF"<<endl;
			return status;
		
		}
		 void showdata()
		{
			cout<<"the color of your fan is "<<color<<endl;
			getradius();cout<<endl;
			getspeed();
			getstatus();
		}
};
main()
{
	int a, b;string c;int s;
 fan f,f1(3,5,"blue",1);
 cout<<"Enter the color of your fan"<<endl;
 cin>>c;
 f.setcolor(c);
 cout<<"Enter the radius of your fan"<<endl;
 cin>>b;
 f.setradius(b); 
 cout<<"Enter the speed of the fan "<<endl;
 cout<<"1.FAST\n2.MEDIUM\n3.SLOW"<<endl;
 cin>>a;
 f.setspeed(a);
 cout<<"Enter status of your fan \n 1.ON \n 2.OFF"<<endl;
 cin>>s;
 f.setstatus(s);
 f.showdata();cout<<endl;
 cout<<"The default value of your fan are"<<endl;
 f1.showdata();
 getch();
 return 0;
 }
