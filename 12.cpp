#include<iostream>
#include<conio.h>
using namespace std;
int main()
{	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int b[10]={1,2,3,4,5,6,7,8,9,10};
	int sum[10],*p,*q,*result;
	p=&a;
	q=&b;
	result=&sum;
	for (int i=0;i<10;i++)
	{	*(result+i)=*(p+i)+*(q+i);
		cout<<"a"<<"["<<*(p+i)<<"]"<<"\t"<<"b"<<"["<<*(q+i)<<"]"<<"\t"<<"sum="<<*(result+i)<<endl;  }
getch();  
return 0;		}

