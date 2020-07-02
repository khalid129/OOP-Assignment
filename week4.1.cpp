#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int i,n,f=1,*p;
	cout<<"Enter the number whose factorial to be calculated "<<endl;
	cin>>n;
	p=&n;
	for(i=1;i<=*p;i++)
	{
		f=f*(i);
	}
	cout<<"The factorial of "<<*p<<"! = "<<f;
}
