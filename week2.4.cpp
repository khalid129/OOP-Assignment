#include<iostream>
#include<conio.h>
using namespace std;
int main()
{ float temp,temper;
cout<<"Enter a temperature in farenheit ";
cin>>temp;
cout<<"The temperature in celcius is "<<(temp-32)/1.8;
cout<<temp<<endl;
cout<<"Enter a temperature in celcius ";
cin>>temper;
cout<<"The temperature in farenheit is "<<(1.8*temper)+32;
cout<<temper;
getch();  return 0; }

