/*Program for swapping of two numbers*/
#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,c=0;
	clrscr();
	cout<<"\n Enter any two Numbers:";
	cin>>a>>b;
	c=a;
	a=b;
	b=c;
	cout<<"\n The value of a="<<a;
	cout<<"\n The value of b="<<b;
	getch();

}
