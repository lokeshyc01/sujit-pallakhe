# include<iostream>
#include<fstream>
using namespace std;

class product{
	int pid;
	string pname,company;
	public:
		product()
		{
			pid=04;
			pname="burger";
			company="Burger king";
		}
		public:
			product(int pid,string pname,string company)
			{
				this->pid=pid;
				this->pname=pname;
				this->company=company;
			}
			virtual calculateprice()
			{
				
			}
			public :void display()
			{
				cout<<"Product Id is :  "<<pid;
				cout<<"Product name is : "<<pname;
				cout<<"Product company is : "<<company;
			}
};
//class Snacksproduct:public product
//{
//	
//	int quantity,price;
//	 Snacksproduct(int pid,string pname,string company,int quantity):product(int pid,string pname,string company)
//	{
//		this->quantity=quantity;
//		this->price=price;
//	}
//public: void calculateprice()
//	{
//		price=quantity*50;
//		
//	}
//	void display()
//	{
//		cout<<"---------Snacksproduct details----------";
//		cout<<"Price of Product is : "<<price;
//		//product::void display();
//	}
//};
int main()
{
	product p(005,"pizza","BurgerKing");
	product p1(006,"French fries","burger king");
	p.display();
	ifstream in<output.txt>
	string s
	in>>string s
	ofstream out<output.txt>
	out<<output.txt;
	
}
