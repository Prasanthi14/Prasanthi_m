#include<iostream>
using namespace std;

class A
{
	int x;
	int y;
public:
	void Aassign();
	void Adisplay();
};
class B:public A
{
	int p;
	int q;
public:
	void Bassign();
	void Bdisplay();
};
class C
{

};
void A::Aassign()
{
	x=11;
	y=22;
	//p=10;
	//q=12;
}
void B::Bassign()
{
	p=12;
	q=13;
	//x=13;
	//y=14;
}
void A::Adisplay()
{
	cout<<x<<" "<<y<<endl;
}
void B::Bdisplay()
{
	Adisplay();
	cout<<p<<" "<<q<<endl;
}
int main()
{
	B obj1;
	obj1.Aassign();
	obj1.Bassign();
	obj1.Bdisplay();
	cout<<sizeof(B)<<endl;
	cout<<sizeof(A)<<endl;
	cout<<sizeof(C)<<endl;
}