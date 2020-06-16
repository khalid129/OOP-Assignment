#include<iostream>
#include<conio.h>
using namespace std;
class plane
{
	private:
		int seat[12][7],fseat,bseat,eseat,x,y,z;
	public:
		plane(){fseat=0,bseat=0,eseat=0;}
	void setfseat(int n)//1
	{
		if(14-(fseat+n)>=0)
		{
			fseat=fseat+n;
			cout<<"Congratulation you have reserved your "<<fseat<<"seat"<<endl;
			cout<<"your total fair is "<<n*105000<<endl;
			cout<<"your rservation seat are as follows"<<endl;
			void setseatdis();
		}
		else
		cout<<"sorry we dont have enough seats"<<endl;
	}
	void setbseat(int o)//2
	{
		if(35-(bseat+o)>=0)
		{
			bseat=bseat+o;
			cout<<"Congratulation you have reserved your "<<bseat<<"seat"<<endl;
			cout<<"your total fair is "<<o*65000<<endl;
			cout<<"your rservation seat are as follows"<<endl;
			void setseatdis();
		}
		else
		cout<<"sorry we dont have enough seats"<<endl;
	}
	void seteseat(int m)//3
	{
		if(35-(eseat+m)>=0)
		{
			eseat=eseat+m;
			cout<<"Congratulation you have reserved your "<<eseat<<"seat"<<endl;
			cout<<"your total fair is "<<m*35000<<endl;
			cout<<"your rservation seat are as follows"<<endl;
			void setseatdis();
		}
		else
		cout<<"sorry we dont have enough seats"<<endl;
	}
	void setseatdis()//4
	{
		x=fseat;y=bseat;z=eseat;
		int i,j;
		for(i=0;i<=11;i++)
		{
			for(j=0;j<=6;j++)
			{
		    if(x>0&&i<2)
			{seat[i][j]=1;x--;}
			else if
			(y>0&&i>1&&i<7)
			{seat[i][j]=1;y--;}		
			else if(z>0&&i>6&&i<12)
			{seat[i][j]=1;z--;}
			else
			seat[i][j]=0;
			}
	    }
		for(i=0;i<=11;i++)
		{
			for(j=0;j<=6;j++)
			{
				cout<<seat[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	void setfair()
	{
		cout<<"Fair of first class seat is 105000"<<endl;
		cout<<"Fair of buisness class seat is 65000"<<endl;
		cout<<"Fair of economy class seat is 35000"<<endl;
	}
	void setreset()
	{
		int i,j;
		for(i=0;i<=11;i++)
		{
			for(j=0;j<=6;j++)
			{
				seat[i][j]=0;
			}
		}
		fseat=0,bseat=0,eseat=0;
		setseatdis();
	}	
};

main()
{
	plane p;
	int a,f,b,e,c,k;
	char n;
	do{
	cout<<"\t\t\tWELLCOME TO OUR AIRPLANE RESERVATION CENTER"<<endl;
	cout<<"1.Book First Class seats"<<endl;
	cout<<"2.Book Buisness Class seats"<<endl;
	cout<<"3.Book Economy Class seats "<<endl;
	cout<<"4.View Air Plane Seating Assignment"<<endl;
	cout<<"5.Know Fair"<<endl;
	cout<<"6.System Reset"<<endl;
	cout<<"7.Exist From The Booking System"<<endl;
	cout<<"Enter Your Choice"<<endl;
	cin>>a;
	switch(a)
	{
		case 1:
			cout<<"Enter the number of First Class seats that you want to reserved"<<endl;
			cin>>f;
			p.setfseat(f);
			p.setseatdis();
			break;
		case 2:
			cout<<"Enter the number of Buisness Class seats that you want to reserved"<<endl;
			cin>>b;
			p.setbseat(b);
			p.setseatdis();
			break;
		case 3:
			cout<<"Enter the number of Economy Class seats that you want to reserved"<<endl;
			cin>>e;
			p.seteseat(e);
			p.setseatdis();
			break;
		case 4:
			p.setseatdis();
			break;
		case 5:
			cout<<"The fair of different class are as follows"<<endl;
			p.setfair();
			break;
		case 6:
			cout<<"Do you want to exit from the system   Y=yes  and N=no!"<<endl;
			cin>>n;
			if(n=='N')break;
			else
			p.setseatdis();
			break;
		case 7:
			cout<<"You have exist from the flight booking system "<<endl;
			break;
		default:
			cout<<"INVALID CASE";
}
}while(a!=7);

	getch();
	return 0;	
}

