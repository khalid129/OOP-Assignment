#include<iostream>
#include<conio.h>
using namespace std;

class door{
	protected:
	int numberofdoor;
	int sizeofdoor;
	string colorofdoor;

public:
	door(int numberofd){
		numberofdoor=numberofd;
		sizeofdoor=6;
		colorofdoor="red";
	}
	showdoor(){
		cout<<"the number of doors in a room are"<<numberofdoor<<endl;
		cout<<"the size of door is"<<sizeofdoor<<"metres"<<endl;
		cout<<"the color of door is"<<colorofdoor<<endl;
	}
};

class window{
	
		protected:
	int numberofwindow;
	int sizeofwindow;
	string colorofwindow;

public:
	window(int numberofw){
		numberofwindow=numberofw;
		sizeofwindow=3;
		colorofwindow="white";
	}
	showwindow(){
		cout<<"the number of windows in a room are"<<numberofwindow<<endl;
		cout<<"the size of window is"<<sizeofwindow<<"metres"<<endl;
		cout<<"the color of window is"<<colorofwindow<<endl;
	}
};

class room{
	
	protected:
	door doorofroom;
	window windowofroom;
	string roomcolor;
	public:
		room(door d1,window w1,string c):doorofroom(d1),windowofroom(w1),roomcolor(c){}
		
		showroom(){
			
			cout<<"the color of room is "<<roomcolor<<endl;
			cout<<"the info about doors of room is "<<doorofroom.showdoor();
			cout<<endl;
			cout<<"the info about windows of room is",windowofroom.showwindow();//, se b seperate karsakte hen
			cout<<endl;
		}
};
int main(){
	
	door d1(2);
	window w1(6);
	room r1(d1,w1,"YELLOW");
	r1.showroom();
	door d2(8);
	d2.showdoor();
	
	getch;
	return 0;
}
