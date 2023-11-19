#include<iostream>
using namespace std;

class student{
	public:
		int RNo,i;
		string Sname;
		int Contact;
		string Email;
		int SemGPA[8];
		float TotalCGPA;
		
		void getdata()
		{
			cout<<"Details of student"<<endl;
			cout<<" Kindly enter roll no: ";
			cin>>RNo;
						
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
			cout<<"Roll no: "<<RNo<<endl;
			cout<<"Name of student: "<<Sname<<endl;
			cout<<"Contact number: "<<Contact<<endl;
			cout<<"Email address: "<<Email<<endl;
			for(i=0;i<8;i++)
			{
				cout<<"SGPA of "<<i+1<<" semester: "<<SemGPA[i]<<endl;
			}
		}
		
		float compute()
		{
			for(i=0;i<8;i++)
			{
				TotalCGPA=TotalCGPA+SemGPA[i];
			}
			TotalCGPA=TotalCGPA/8;
			return TotalCGPA;
		}
};

int main()
{
	float y;
	student x;
	x.getdata();
	cout<<endl;
	x.putdata();
	y=x.compute();
	cout<<"Total CGPA of the student is: "<<y<<endl;
}
