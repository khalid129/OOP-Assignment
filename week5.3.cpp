#include<iostream>
#include<conio.h>
using namespace std;
class bags
{
private:
 	int nobags,l,m,s;
 	float cl,cm,cs;
public:
	bags(int n):nobags(n){l=nobags/20,m=(nobags%20)/10,s=(nobags%20)%10;
	if(s==0) s=0; if(s<=5) s=1; else s=2;
	cl=l*1.8, cm=m*1.0, cs=s*0.6;}
void setnobags(int n)
	{
		nobags=n;
	}
	int getnobags()
	{
		return nobags;
	}
	void offer()
	{
		cout<<"The total no bags are "<<nobags<<endl;
		cout<<"Number of boxes are used "<<endl;
		cout<<"large box  is  "<<l<<" = "<<cl<<" $ "<<endl;
		cout<<"medium box is  "<<m<<" = "<<cm<<"   $ "<<endl;
		cout<<"small box  is  "<<s<<" = "<<cs<<" $ "<<endl;
		cout<<"The total cost of all the bags is "<<(5.50*nobags)+cl+cm+cs<<" $"<<endl;
	}
	
};
main()
{
int n;
cout<<"Enter no of coffie"<<endl;
cin>>n;
bags c1(n);
c1.setnobags(n);	
c1.offer();
getch();
return 0;
}
