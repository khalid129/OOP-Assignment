#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
struct book
{
//	private:
	long  int bookid;
	char booktitle[20];
	int price;
	public:
		book input();
/*	void input()
	{
		cout<<"Enter the data of book; bookid, booktitle, price"<<endl;
		cin>>bookid>>booktitle>>price;
	}*/
	void ouput()
	{
		cout<<"the records of the books are "<<endl;
		cout<<bookid<<endl<<booktitle<<endl<<price<<endl;
	}
};
main()
{
book b1,b3;
book b2={4101322,"c++ by khalid",450.78};
b3=input();
b1.ouput();
cout<<"The record of the another book";
strcpy(b2.booktitle,"assalam alaikum");
cout<<b2.bookid<<endl<<b2.booktitle<<endl<<b2.price;
 	getch();
	return 0;
}
book input()
{
	book b;
	cout<<"Enter the data of book; bookid, booktitle, price"<<endl;
	cin>>b.bookid>>b.booktitle>>b.price;
	return(b);
} 
