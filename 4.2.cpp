#include<iostream>
using namespace std;
#include<stdlib.h>

class point {
	private:
		int x,y;
	
	public:
		point()
		{
			x=0;
			y=0;
		}
		
		
		point(int a, int b)
		{
			x=a;
			y=b;
		}
		
		void setX(int a)
		{
			x=a;
		}
		
		void setY(int b)
		{
			y=b;
		}	
		
		void setXY(int a, int b)
		{
			x=a;
			y=b;
		}
		
		void sum(int a, int b)
		{
			x=a;
			y=b;
			int c=0;
			c=x+y;
			
			cout<<"Sum of "<<x<<" and "<<y<<" is: "<<c<<endl;
		}
		
		void sum(int a)
		{
			
			int num=a,sum=0,digit;
			while(num>0)
			{
				digit=num%10;
				sum=sum+digit;
				num=num/10;
			}
			cout<<"Sum of "<<a<<" is: "<<sum<<endl;
		}
};

int main()
{
	point obj1;
	int ch,x,y;
	cout<<"________________Function Overload Menu___________________"<<endl;
	cout<<"1.Initialize X and Initialize Y\t\t2.Sum of X and Y"<<endl;
	cout<<"3.Sum of Digits of X and Y\t\t4.Exit"<<endl;
	
	while(1)
	{
		cout<<endl<<"Kindly enter your choice: ";
		cin>>ch;
		
		switch(ch) {
			case 1:
				cout<<"Kindly enter X Value: ";
				cin>>x;
				obj1.setX(x);
				cout<<"Kindly enter Y Value: ";
				cin>>y;
				obj1.setY(y);
				break;
							
			case 2:
				obj1.sum(x,y);
				break;
			
			case 3:
				obj1.sum(x);
				obj1.sum(y);
				break;
			
			case 4:
				cout<<"Succesfully exiting program"<<endl;
				exit(0);
				

			default:
				cout<<"Wrong choice"<<endl;
				break;
				
			}
		}
}
