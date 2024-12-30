#include<iostream>
using namespace std;
void geometry();
void geometry(int l);
void geometry(int l,int b);
void geometry(int r,float pi );
int main()
{
	geometry();
	geometry(4);
	geometry(4,5);
	geometry(4,3.14f);
}
void geometry()
{
	cout<<"area of all geometry\n";
}
void geometry(int l)
{
	int area=l*l;
	cout<<"area of square :- "<<area<<endl;
}
void geometry(int l,int b)
{
	int area=l*b;
	cout<<"area of rectangle :- "<<area<<endl;
	
}
void geometry(int r,float pi)
{
	float area=r*r*pi;
	cout<<"area of circle :- "<<area<<endl;
}



