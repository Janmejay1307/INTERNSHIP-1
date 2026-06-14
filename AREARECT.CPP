#include<iostream.h>
#include<conio.h>

class jay
{
	private:
		int wid,len;
	public:
		jay(int w,int l)
		{
		       wid=w;
		       len=l;
		}
		int rect()
		{
		      cout<<"WIDTH="<<wid<<endl;
		      cout<<"LENGTH="<<len<<endl;
		      cout<<"AREA= "<<wid*len;
		}
};


void main()
{
	int wid,len;
	clrscr();
	cout<<"ENTER WIDTH"<<endl;
	cin>>wid;
	cout<<"ENTER LENGTH"<<endl;
	cin>>len;

	jay *j;
	j=new jay(wid,len);
	j->rect();

	getch();
}