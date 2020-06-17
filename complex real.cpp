#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	private:
		double real,img;
		public:
			complex()
			{}
		complex(double r,double i):real(r),img(i)
		{}
		void setreal(double r)
		{
			real=r;
		}
		double getreal()
		{
			return real;
		}
		void setimg(double i)
		{
			img=i;
		}
		double getimg()
		{
			return img;
		}
		void showdata()
		{
			cout<<real<<"+"<<img<<"i"<<endl;
		}
		complex operator+ (const complex& c)
		{
			complex x;
			x.real=real+c.real;
			x.img=img+c.img;
			return x;
		}
			complex operator* (const complex& c1)
		{
			complex x;
			x.real=real*c1.real;
			x.img=img*c1.img;
			return x;
		}
			complex operator/ (const complex& c1)
		{
			complex x;
			x.real=real/c1.real;
			x.img=img/c1.img;
			return x;
		}
};
main()
{
	 complex c1(4.5,8.1);
	 complex c2(5.6,9.4);
	 complex c3;
	 c3=c1+c2;
	 cout<<"REAL part inside  c3 is "<<c3.getreal()<<endl;
	 cout<<"IMGINARY part inside c3 is "<<c3.getimg()<<endl;
	 //cout<<"Complete complex number inside c3 is "<<c3.showdata()<<endl;
	 getch();
	 return 0;
}
