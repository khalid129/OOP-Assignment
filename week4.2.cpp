#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int arr1[5],arr2[5],sum[5];
	int *p[5],*q[5],*r[5];
	cout<<"enter first array"<<endl;
	for(int i=0;i<=4;i++)
	{
		cin>>arr1[i];
		p[i]=&arr1[i];
	}
	cout<<"enter second array"<<endl;
	for(int i=0;i<=4;i++)
	{
		cin>>arr2[i];
		q[i]=&arr2[i];
	}
	cout<<"the sum of these two arrays"<<endl;
	for(int i=0;i<=4;i++)
	{
		*r[i]=*p[i]+*q[i];
	cout<<*r[i];
	}
}
