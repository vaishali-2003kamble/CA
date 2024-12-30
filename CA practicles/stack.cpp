#include<iostream>
using namespace std;
class stack
{
	private:int data,size;
	int top;
	int *arr;
	public: int push(int data,int size);
	int  pop(int size);
	stack()
	{
		top=-1;
		*arr=new int arr[3];
		
	}
	
	
};
 int  stack ::push(int data,int size)
 {
 	if(top==size-1)
 	{
 		(top++);
 		arr[top]=data;
	 }
 }
 int stack::pop(int size)
 {
 	if(top>0)
 	{
 		int dele;
 		dele=arr[top];
 		top--;
 		
	 }
 }
 int main()
 {
 	stack s;
 	while(1)
 	{	
 		cout<<"1] push\n 2] pop";
		 int ch;
		 cout<<"enter option\n";
 		cin>>ch;
 		switch(ch)
 		{
 			case 1:int data;
 			cout<<"enter data \n";
 				cin>>data;
 				int size;
 				cin>>size;
 			res=s.push(data,size);
 				if(res==0)
 				{
 					cout<<"data is inserted sucessfully :-";
				 }
				 else
				 {
				 	cout<<"data is not inserted sucessfully :-";
				 }
 				break;
 			case 2:
			 	res=s.pop()
				 {
				 	if(res==0)
				 	{
				 		cout<<"data is deleted sucessfully :-";
					 }
					 else
					 {
					 		cout<<"data is not deleted sucessfully :-";
					 }
				 }	
		 }
 		
 		
 		
	 }
 }
