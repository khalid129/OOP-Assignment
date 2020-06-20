#include<iostream>
#include<conio.h>
using namespace std;
class account; 
class millbill
{
private:
	float bill,tax,tip;
public:
	millbill(float b)
	{bill=b;
	tax = 0.6*bill;
	tip = 0.15*bill;
	}
	float showdata()
	{
		cout<<"   AMOUNT OF YOUR BILL\n"<<endl;
		cout<<"Meal cost = "<<bill<<endl;
		cout<<"tax = "<<tax<<endl;
		cout<<"tip = "<<tip<<endl;
		cout<<"Total cost = "<<bill+tip+tax<<"\n"<<endl;
			return (bill+tip+tax);
	}
	float slip(float s)
	{
		if (s<(bill+tip+tax))
		{cout<<"your amount is insufficient for payment please do again"<<endl;}
		cout<<"   SLIP OF YOUR BILL \n"<<endl;
		cout<<"Total cost  = "<<bill+tip+tax<<endl;
		cout<<"Payment = "<<s<<endl;
		cout<<"Change = "<<s-(bill+tip+tax)<<endl;
		cout<<"Thank you for visiting our resturant have a nice day \n"<<endl;
	}
};
class account
{
	int bal;
public:
	account(){}
	void setbalance(int b)
	{
		bal=b;
	}
	void showbalance(float b)
	{
		cout<<"   ACCOUNT DETAILS \n"<<endl;
		cout<<"NAME = MUHAMMAD KHALID "<<endl;
		cout<<"ACCOUNT ID = SE-018 "<<endl;
		cout<<"your previous = " <<bal<<endl;
		cout<<"your current balance is"<<bal-b<<endl;
	}
};
int main()
{  
	float bill,kh,payment;
	account pay;
	cout<<"         WELLCOME TO THE KHALID RESTURANT"<<endl;
	cout<<"Enter the meal cost"<<endl;
	cin>>bill;
	millbill m(bill);
	kh=m.showdata();
	pay.setbalance(2000);
	cout<<"Please pay your bill by Khalid account"<<endl;
	cin>>payment;
	m.slip(payment);
	pay.showbalance(kh);
	//pay.showbalance();
	getch();
	return 0;
}
