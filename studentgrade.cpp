#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class grades
{
	string studentid;
	int credit;
	char grade;
	float gpa;
public:
grades(string id,char g,int c)
{
	studentid=id;
	grade=g;
	credit=c;
}
void showgrade()
{
	int g;
	cout<<       "WLCOME TO NEDUET"<<endl;
	cout<<"Student ID = "<<studentid<<endl;
	if(grade=='A'){g=4;gpa=g*credit;	}
	else if(grade=='B'){g=3;gpa=g*credit;	}
	else if(grade=='C'){g=2;gpa=g*credit;	}
	else{cout<<"you are fail "<<endl;}
	cout<<"Student grade = "<<grade<<endl;
	cout<<"Credit hour = "<<credit<<endl;
	cout<<"Student grade point = "<<gpa<<endl;
}
void showdefault()
{
	cout<<"student ID = "<<studentid<<endl;
	cout<<"credit = "<<credit<<endl;
	cout<<"Grade point = "<<grade<<endl;
}
};
int main()
{
	string id; int credit; float gp;
	cout<<"Are you a new student ?\n Enter 'y'/'Y' for (yes) and 'n'/'N' for (No)"<<endl;
	char c,g;
	cin>>c;
	if(c=='Y'||c=='y')
	{cout<<"you record would be Null please Enter your record "<<endl;
	grades s2("0",'0',0);
	s2.showdefault();}
	cout<<"Enter your information\n1.Student ID\n2.Grade points (A,B,C)\n3.Credit hour "<<endl;
	cin>>id;
	cin>>g;
	cin>>credit;
	grades s1(id,g,credit);
	s1.showgrade();
	getch();
	return 0;
}
