#include<iostream>
#include<conio.h>
using namespace std;
int main()
{ int m1[3][3],m2[3][3],m3[3][3],i,j;
	cout<<"Enter two matrix of 3x3"<<endl;
	cout<<"Enter first matrix"<<endl;
	for(i=0;i<=2;i++) { for(j=0;j<=2;j++) { cin>>m1[i][j]; }  }
	cout<<"Enter second matrix"<<endl; 
for(i=0;i<=2;i++) { for(j=0;j<=2;j++) { cin>>m2[i][j]; } }
for(i=0;i<=2;i++) { for(j=0;j<=2;j++) { m3[i][j]=m1[i][j]+m2[i][j]; } }
cout<<"The sum of two matrix are"<<endl;
for(i=0;i<=2;i++) { for(j=0;j<=2;j++) { cout<<m3[i][j]<<"  "; } cout<<endl; }
  getch();  return 0;}

