#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int second,hour,min;
 int sec;
 cout<<"Enter a time in a seconds";
 cin>>second;
 hour=second/3600;
 min=second%3600/60;
 sec=second%3600%60;
 cout<<"The time is"<<hour<<"hour"<<" "<<min<<"min"<<" "<<sec<<"second";
  getch();   return 0;  } 

