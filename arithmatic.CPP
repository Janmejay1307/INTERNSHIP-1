#include<iostream.h>
#include<conio.h>

class num{ 		//PARENT ONE
	public:
		int a,b;
	void display(){
		cout<<"ENTER VALUE OF A"<<endl;
		cin>>a;
		cout<<"ENTER VALUE OF B"<<endl;
		cin>>b;
		}
	};
class cal:public num {
	public:
		void plus()
		{
			cout<<"SUM OF "<<a<<" and "<<b <<" IS: "<<a+b<<endl;
		}
		void minus()
		{
			cout<<"MIN OF "<<a<<" and "<<b <<" IS: "<<a-b<<endl;
		}
		void into()
		{
			cout<<"MULT OF "<<a<<" and "<<b <<" IS: "<<a*b<<endl;
		}
		void dv()
		{
			cout<<"DIV OF "<<a<<" and "<<b <<" IS: "<<a/b<<endl;
		}
 };

void main()
{
	cal obj;
	int op;
	clrscr();
	obj.display();
	cout<<"OPERATIONS :"<<endl;
	cout<<"1.) ADDITION"<<endl;
	cout<<"2.) MINUS"<<endl;
	cout<<"3.) MULTIPLICATION"<<endl;
	cout<<"4.) DIVISION"<<endl;
	cout<<"ENTER OP :"<<endl;
	cin>>op;

	if(op==1)
	{
		obj.plus();
	}
	if(op==2)
	{
		obj.minus();
	}
	if(op==3)
	{
		obj.into();
	}
	if(op==4)
	{
		obj.dv();
	}
	getch();
}