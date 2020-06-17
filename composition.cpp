#include <string>
#include <conio.h>
#include <iostream>
using namespace std;

class date1
{
private:
	int year;
	int month;
	int day;
	
public:
	static const int monthsperyear=12;
	date1(int y,int m,int d)
	{
		year=(y>0&&y<=2030)?y:0;
		month=(m>0&&m<=12)?m:0;
		day=checkday(d);

	}
	void setdata(int y,int m,int d)
	{
		year=(y>0&&y<=2030)?y:0;
		month=(m>0&&m<=12)?m:0;
		day=checkday(d);

	}
	 int checkday(int d1) const
	{
		static const int dayspermonth[monthsperyear+1]= {0,31,28,31,30,31,30,31,31,30,31,30,31};

	 if(d1<= dayspermonth[month])
		 return d1;
	 else
		 return 1;
	}
	 void showdate()
	 {
		 string name[]={"January","February","March","April","May","June","July","August","September","Oct","Novemver","December"};
		 cout<<year<<"/"<<name[month-1]<<"/"<<day<<endl;
	 }

};

class employee
{
	int empno;
	string name;
	string address;
	date1 joiningdate;
	
public:
	
	employee(int eno,string n,string ad,date1 jd):empno(eno),name(n),address(ad),joiningdate(jd)
	{ };
	void showdata()
	{
		cout<<"Employee details are "<<endl<<"Name"<<name<<endl<<"Address is "<<address<<endl<<"joined NED University on";
	     joiningdate.showdate();
		 cout<<endl;

	}
};
class student
{
private:
	int stdid;
	string name;
	string major;
	date1 birthdate;

public:
	student(int id,string n,string m,date1 bd):stdid(id),name(n),major(m),birthdate(bd)
	{ };
	void showdata()
	{
		cout<<"student details are "<<endl<<"Name"<<name<<endl<<"Major is"<<major<<endl<<"Born on";
	    birthdate.showdate();
		 cout<<endl;

	}
};
int main()
{
	date1 d1(2018,3,23);
	date1 d2(1999,4,12);
	student s1(10,"Urooj","Software Engineering",d2);
	employee e1(100,"Asma Khan","Karachi",d1);
	s1.showdata();
	e1.showdata();
	getche();
	return 0;
}
