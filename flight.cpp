#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class flight
{
	private:
	int flightno,availseat,reserve;
	string source,destination;
	public:
	flight()
	{}
	flight(int f,int a,int r,string s,string d):flightno(f),availseat(a),reserve(r),source(s),destination(d)
	{}
	flight(int f,int a,int r):flightno(f),availseat(a),reserve(r)
	{}
	void setflightno(int f)
	{
		flightno=f;
	}
	int getflightno()
	{
		return flightno;
		cout<<flightno;
	}
	void setavailseat(int a)
	{
		availseat=a;
	}
	int getavailseat()
	{
		cout<<"The available seats are "<<availseat<<endl;
		return availseat;
	}
	void setreserve(int r)
	{
		reserve=r;
	}
	int getreserve()
	{
		cout<<"you have reserved "<<reserve<<" seats"<<endl;
		return reserve;
	}
	void setsource(string s)
	{
		source=s;
	}
	string getsource()
	{
		if(source=="karachi")
		source="KAR";
		else if(source=="peshawar")
		source="PES";
		else
		source="invalid";
		return source;
	}
		void setdestination(string d)
	{
		destination=d;
	}
	string getdestination()
	{
		if (destination=="lahore")
		destination="LAH";
		else if(destination=="islamabad") 
		destination="ISL";
		
		return destination;
	}
	void showdata()
	{
		cout<<"your flight no is "<<flightno<<endl;
		cout<<"now available seats are "<<availseat-reserve<<endl;
		//cout<<"your reservation seat is "<<reserve<<endl;
		cout<<"From:"<<getsource()<<endl;
		cout<<"To:"<<getdestination()<<endl;
	}
};
main()
{
	int a,b,c,r;
	string s,d;
	flight f1(123,450,r,s,d),f2(124,460,r,s,d);
	//f1.showdata();
	cout<<"Enter source of your first flight "<<endl;
	cin>>s;
	f1.setsource(s);
	cout<<"Enter destination of your first flight "<<endl;
	cin>>d;
	f1.setdestination(d);
	f1.getavailseat();
	cout<<"Enter seats for reservation of your first flight "<<endl;
	cin>>r;
	f1.setreserve(r);
	f1.getreserve();
	f1.showdata();
	cout<<"Enter source of your second flight "<<endl;
	cin>>s;
	f2.setsource(s);
	cout<<"Enter destination of your second flight "<<endl;
	cin>>d;
	f2.setdestination(d);
	f2.getavailseat();
	cout<<"Enter seats for reservation of your second flight "<<endl;
	cin>>r;
	f2.setreserve(r);
	f2.getreserve();
	f2.showdata();
	getch();
	return 0;
}
