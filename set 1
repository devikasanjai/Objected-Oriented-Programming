#include<iostream>
using namespace std;

static int count=1;

class student{
	private:
		int Contact;
		string Email;
		int SemGPA[8];
		float TotalCGPA;
		
		float compute()
		{
			for(i=0;i<8;i++)
			{
				TotalCGPA=TotalCGPA+SemGPA[i];
			}
			TotalCGPA=TotalCGPA/8;
			cout<<" Total CGPA is "<<TotalCGPA<<endl;
		}
	
	public:
		int RNo=0,i;
		string Sname;
		
		void getdata()
		{
			
			cout<<" Kindly enter name of student: ";
			cin>> Sname;
			
			cout<<" Kindly enter Contact number: ";
			cin>>Contact;
			
			cout<<" Kindly enter Email address: ";
			cin>>Email;
			
			for(i=0;i<8;i++)
			{
				cout<<" Kindly enter SGPA of "<<i+1<<" semester: ";
				cin>>SemGPA[i];
			}
		}
		
		void putdata()
		{
			cout<<" Roll no: "<<RNo<<endl;
			cout<<" Name of student: "<<Sname<<endl;
			cout<<" Contact number: "<<Contact<<endl;
			cout<<" Email address: "<<Email<<endl;
			for(i=0;i<8;i++)
			{
				cout<<" SGPA of "<<i+1<<" semester: "<<SemGPA[i]<<endl;
			}
			compute();
		}
		
		student()
		{
			RNo=RNo+count;
			count=count+1;
		
		}
		
		~student()
		{
			cout<<" Executing Destructor "<<endl;
		}	
};

int main()
{
	int size;
	cout<<"Enter number of students: ";
	cin>>size;
	cout<<endl;
	
	student x[size];
	int i;
	for(i=0;i<size;i++)
	{
		cout<<"Details of student "<<i+1<<": "<<endl;
		x[i].getdata();
		cout<<endl;
		x[i].putdata();
		cout<<endl;
	}
		
}
