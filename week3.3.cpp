#include<iostream>
#include<conio.h>
using namespace std;
	struct student
	{ char Fname[20];
	char lname[20];
	int score; };
int main()
{ int i;   student s[5];
  for(i=0;i<5;i++) { cout<<"Enter first name ,last name and score"<<endl<<"  ";
  cin>>s[i].Fname>>s[i].lname>>s[i].score; }
  cout<<"STUDENTS RECORD"<<endl;
  for(i=0;i<5;i++)
  {  cout<<"First name ="<<s[i].Fname<<endl; 
   cout<<"last name ="<<s[i].lname<<endl;
   cout<<"scores ="<<s[i].score<<endl;  } 	 
	getch(); return 0; }

