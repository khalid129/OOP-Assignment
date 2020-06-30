#include<iostream>
#include<conio.h>
using namespace std;
main()
{   int a,b,choice;
    int *p1,*p2;
    float c;
   float *p3;
    cout<<"\t\t\t\tWELCOME TO CALCULATOR\n";
do
{   cout<<"\n1.Addition\n2.Subraction\n3.Multiplication\n4.Division\n5.Exit\n";
    cout<<"\t\t\t\tEnter Your choice        : "; cin>>choice;
	switch(choice)
{   case 1:
   cout<<"Enter 1st value =";cin>>a;
    cout<<"Enter 2nd value =";cin>>b;
    p1=&a; p2=&b; p3=&c;
    *p3=(*p1)+(*p2);
    cout<<*p1<<"+"<<*p2<<"="<<*p3<<endl;
    break;
  case 2: 
   cout<<"Enter 1st value =";cin>>a;
   cout<<"Enter 2nd value =";cin>>b;
   p1=&a; p2=&b; p3=&c;
  *p3=(*p1)-(*p2);
   cout<<*p1<<"-"<<*p2<<"="<<*p3<<endl;
   break;
  case 3:
  cout<<"Enter 1st value =";cin>>a;
  cout<<"Enter 2nd value =";cin>>b;
  p1=&a; p2=&b; p3=&c;
 *p3=(*p1)*(*p2);
  cout<<*p1<<"*"<<*p2<<"="<<*p3<<endl;
  break;
  case 4:
  cout<<"Enter 1st value =";cin>>a;
  cout<<"Enter 2nd value =";cin>>b;
 p1=&a; p2=&b; p3=&c;
 *p3=(float)(*p1)/(*p2);
  cout<<*p1<<"/"<<*p2<<"="<<*p3<<endl;
  break;
  case 5:
  cout<<"\n\t\t\t\tThankyou! You successfully exit from Calculator.\n\n\n";
  exit(0);
  break;
default :
cout<<"Error";
  } }while(choice!=5);
    return 0; }

