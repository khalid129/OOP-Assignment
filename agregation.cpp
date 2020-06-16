#include <conio.h>
#include<iostream>
using namespace std;


class Chair
{
};
class room
{
	int chairno;
	 Chair* chair[20];

public:
	room()
	{
		for(int i=0;i<=20;i++)
			chair[i]=NULL;
	}

	void Addchair(Chair* ch,int chairno)
	{
		if(chairno>=0 && chairno<=20)
		{
			chair[chairno]=ch;
		}
	}
	Chair* getchair()
	{
		if(chairno>=0 && chairno<=20)
			return chair[chairno];
		else
			return NULL;
	}
};
int main()
{
	Chair ch[20];
	room r1;
	cout<<"Room details are ";
	for(int i=0;i<=20;i++)
	{  
		r1.Addchair(&ch[i],i);
		cout<<"chair"<<i<<"/t"<<r1.getchair();
		getche();
       return 0;
	}
}
