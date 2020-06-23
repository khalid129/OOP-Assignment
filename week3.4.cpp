#include<iostream>
#include<conio.h>
using namespace std;
struct student
{ char Fname[20];
char lname[20];
int score;	};
void Display(student st)
{ cout<<"First name ="<<st.Fname<<endl;
cout<<"last name ="<<st.lname<<endl;
cout<<"scores ="<<st.score<<endl;  } 	 
int main()
{ int i;
  student s[5];
  for(i=0;i<5;i++)
  { cout<<"Enter first name ,last name and score"<<endl<<"  ";
  cin>>s[i].Fname>>s[i].lname>>s[i].score; }
  cout<<"STUDENTS RECORD"<<endl;
  for(i=0;i<5;i++) {Display(s[i]);}
  getch(); return 0; }

