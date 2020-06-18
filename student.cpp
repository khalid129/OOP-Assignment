#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class person
{
private:
string name;
int age;
char gender;
public:
	person()
	{}
	person(string n,int a,char g):name(n),age(a),gender(g)
	{}
	string getname()
	{
		return name;
	}
	void setname(string n)
	{
		name=n;
	}
	int getage()
	{
		return age;
	}
	void setage(int a)
	{
		age=a;
	}
	char getgender()
	{
		return gender;
	}
	void setgender(char g)
	{
		gender=g;
	}
	virtual void showdata()
	{
		cout<<"your name is "<<name<<endl;
		cout<<"your age is "<<age<<endl;
		cout<<"your gender is "<<gender<<endl;
	}
};
class student:public person
{
	private:
		int gpa;
	public:
		student(string n,int a, char g, int h):person(n,a,g),gpa(h)
		{}
	int getgpa()
	{
		return gpa;
	}
	void setgpa(int h)
	{
		gpa=h;
	}
	virtual void showdata()
	{
	cout<<"your name age and gnder is "<<endl;
	person::showdata();
	cout<<"your gpa is "<<gpa<<endl;
	}
	float result()
	{
	return gpa*10;	
	}	
};
int main()
{
	student s1("Muhammad khalid",18,'G',4);
	s1.showdata();
	getch();
	return 0;
}

