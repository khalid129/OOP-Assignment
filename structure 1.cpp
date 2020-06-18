#include<iostream>
#include<conio.h>
using namespace std;
struct book
{
	int bookid;
	char title[20];
	int price;
};
book input();
main()
{
	cout<<"enter  bookid, title, price";
	book b1,b2;
	b1=input();
	//dispaly(b1);
}
book input()
{
	book b;
	cin>>b.bookid>>b.title>>b.price;
	return b;
}
