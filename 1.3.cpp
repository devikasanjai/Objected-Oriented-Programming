#include<iostream>
using namespace std;

static int count=1;

class employee{
	private:
		int computeNetSalary()
		{
			DA=0.52*Basic;

			if(Basic<10000)
				IT=0*Basic;
			else if(Basic<20000)
				IT=0.10*Basic;
			else if(Basic<30000)
				IT=0.20*Basic;
			else if(Basic<40000)
				IT=0.30*Basic;
				
			NetSalary=(Basic+DA)-IT;
		}
	
	public:
		int ENo=0;
		string Ename;
		int Basic;
		int DA;
		int IT;
		int NetSalary;
		
		void getdata()
		{
			
			cout<<" Kindly enter name of employee: ";
			cin>> Ename;
			
			cout<<" Kindly enter basic salary: ";
			cin>>Basic;		
		
		}
		
		void putdata()
		{
			computeNetSalary();
			cout<<" Employee number: "<<ENo<<endl;
			cout<<" Name of employee: "<<Ename<<endl;
			cout<<" Basic Salary: "<<Basic<<endl;
			cout<<" Dearness Allowance: "<<DA<<endl;
			cout<<" Income Tax: "<<IT<<endl;
			cout<<" Net Salary: "<<NetSalary<<endl;
				
		}
	
		
		employee()
		{
			ENo=ENo+count;
			count=count+1;
		
		}
		
		~employee()
		{
			cout<<" Executing Destructor "<<endl;
		}	
};

int main()
{
	int size;
	cout<<"Enter number of employees: ";
	cin>>size;
	cout<<endl;
	
	employee x[size];
	int i;
	for(i=0;i<size;i++)
	{
		cout<<"Details of employee "<<i+1<<": "<<endl;
		x[i].getdata();
		cout<<endl;
		x[i].putdata();
		cout<<endl;
	}
		
}
