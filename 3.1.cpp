#include<iostream>
using namespace std;

class employee
{
	string name;
	int age,phone,salary;
	
	public:
		employee()
		{
		}
		
		void getdata()
		{
			cout<<" Kindly enter name: ";
			cin>>name;
			cout<<" Kindly enter age: ";
			cin>>age;
			cout<<" Kindly enter phone number: ";
			cin>>phone;
			cout<<" Kindly enter salary: ";
			cin>>salary;
		}
		
		void printSalary()
		{
			cout<<" Name: "<<name<<endl;
			cout<<" Age: "<<age<<endl;
			cout<<" Phone: "<<phone<<endl;
			cout<<" Salary: "<<salary<<endl;
		}
		
		~employee()
		{
		}
};

class officer : public employee
{
	string specialization;
	public:
		officer()
		{
			cout<<"\n Kindly enter specialization: ";
			cin>>specialization;
		}
		
		void putdata()
		{
			cout<<endl<<" Specialization: "<<specialization<<endl;
		}
};
				
class manager : public employee
{
	string department;
	public:
		manager()
		{
			cout<<"\n Kindly enter department: ";
			cin>>department;
		}
		
		void putdata()
		{
			cout<<endl<<" Department: "<<department<<endl;
		}
};

int main()
{
	/*employee e;*/
	
	
	
	cout<<endl<<"-----------\nEnter Officer details:";
	officer o;
	o.getdata();
		
	cout<<endl<<"-----------\nEnter Manager details:";
	manager m;
	m.getdata();
	
	cout<<endl<<"-----------\nPrinting Officer details:"<<endl;
	o.putdata();
	o.printSalary();
	cout<<endl<<"-----------\nPrinting Manager details:"<<endl;
	m.putdata();
	m.printSalary();
}
	
