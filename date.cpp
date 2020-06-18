#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class date
{
	private:
	int year;
	int month;
	int day;
	static const int monthperyear=12;
	public:
	date(int y,int m,int d):year(y),month(m),day(d)
	{}
	void setdate(int y,int m, int d)
	{
		year=(y>0&&y<=2050)?y:0;
		month=(m>0&&m<=12)?m:0;
		day=checkday(d);
	}
	int checkday(int d1)
	{
		static const int dayspermonth[monthperyear+1]={0,31,28,31,30,31,30,31,31,30,31,30,31};
		if(d1<=dayspermonth[month])
		return d1;
		else 
		return 1;
	}
	void showdata()
	{
		string name[]={"january","Feb","Mar","Apr","May","jun","jul","Aug","Sep","oct","Nov","Dec"};
		cout<<year<<"/"<<name[month-1]<<"/"<<day<<endl;
	}
};
class person
{
	private:
	string name;
	string address;
	int phone;
	date birthdate;
	date joing;
	public:
		person(string n,string a,int ph,date d1,date d2):name(n),address(a),phone(ph),birthdate(d1),joing(d2)
		{}
		void showdat()
		{
			cout<<"person name is "<<name<<endl;
			cout<<"person address is "<<address<<endl;
			cout<<"person contact no is "<<phone<<endl;
			cout<<"person was born at ";
			birthdate.showdata();
			joing.showdata();
			cout<<endl;
		}
};
 main()
{
	date d1(2000,11,3);
	date d2(2018,8,23);
	person p1("khalid","orangi",543,d1,d2);
	p1.showdat();
	//date d2(2018,8,23);
	cout<<endl;
return 0;
}
