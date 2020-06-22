#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{  	int x1,x2,y1,y2;
	char c1,c2,c3;
	cout<<"Enter the two cordinates (x1,y1) and (x2,y2)"<<endl;
	cout<<"(x1,y1) =";
	cin>>c1>>x1>>c2>>y1>>c3;
	cout<<"(x2,y2) =";
	cin>>c1>>x2>>c2>>y2>>c3;
	int d=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	sqrt(d);
	cout<<"the distance between these points is"<<"("<<x1<<","<<y1<<")"<<" "<<"and"<<"("<<x2<<","<<y2<<")"<<" "<< "is"<<"  "<<d;
	    getch();     return 0;  }

