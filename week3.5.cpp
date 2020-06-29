#include<iostream>
using namespace std;
struct adress
{ int hno;
 char city[10];
 int pin; };
struct emp
{ int id;
 char name[20];
 int sal;
 adress add; };
int main()
{ emp e[1];
  int i;
 for(i=0;i<1;i++)
{  cout<<"\nEnter employee name : ";
   cin.get(e[i].name,20);
   cout<<"\nEnter employ's id  : ";
   cin>>e[i].id;
   cout<<"\nEnter salary : ";
   cin>>e[i].sal;
   cout<<"\nEnter House#";
   cin>>e[i].add.hno;
   cout<<"\nEnter City ";
   cin>>e[i].add.city;
   cout<<"\nEnter Pin code ";
   cin>>e[i].add.pin;
   if(e[i].sal<50000)
   {
   e[i].sal+=5000;
   }}
cout<<"                                EMPLOY'S RECORD"<<endl;
    
for(i=0;i<1;i++)
{  cout<<"\nemployee name : "<<e[i].name;
   cout<<"\nemploy's id  : "<<e[i].id;
   cout<<"\nsalary : "<<e[i].sal;
   cout<<"\nHouse#"<<e[i].add.hno;
   cout<<"\nCity "<<e[i].add.city;
   cout<<"\nPin code "<<e[i].add.pin;}}

