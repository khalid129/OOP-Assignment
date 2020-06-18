#include<iostream>
#include<conio.h>
using namespace std;
class room
{
protected:
	int no_of_room;
	float sizeofroom;
	public:
		room(int nr):no_of_room(nr),sizeofroom(123.4){}
void showroom()
{
	cout<<"the no of room in school "<<no_of_room<<endl;
	cout<<"the size of each room is "<<sizeofroom<<endl;
}
};
class lab
{
protected:
int no_of_lab;
float sizeoflab;
public:
lab(int nl):no_of_lab(nl),sizeoflab(234.6){}
void showlab()
{
	cout<<"no of lab in school "<<no_of_lab<<endl;
	cout<<"size of each lab is "<<sizeoflab<<endl;
	}	
};
class school
{
	protected:
	room sizeofroom;
	lab sizeoflab;
	string name;
	public:
		school(room r1,lab l1,string n):sizeofroom(r1),sizeoflab(l1),name(n){}
void showschool()
{
	cout<<"the name of school is "<<name<<endl;
	cout<<"the information about class room is ",sizeofroom.showroom();
	cout<<"the information about lab is ",sizeoflab.showlab();
	
}

};
int main()
{
	room d1(5);
	lab l1(7);
	school s1(d1,l1,"khalid");
	s1.showschool();
	getch();
	return 0;
}
