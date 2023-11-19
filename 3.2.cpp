#include<iostream>
using namespace std;

class student
{
	
	
	public:
		int RNo,M1,M2;
		void getStudentData()
		{
			cout<<" \n Kindly enter Roll Number of Student: ";
			cin>>RNo;
			cout<<" Kindly enter Student's Mark 1: ";
			cin>>M1;
			cout<<" Kindly enter Student's Mark 2: ";
			cin>>M2;
		}
		
		
};

class sport
{

	
	public:
		int gracemarks;
		void getSportsData()
		{
			cout<<"\n Kindly enter Student's Sports Grace Mark: ";
			cin>>gracemarks;
		}
		
};

class report:public student,public sport
{
	
	public:
		int Total;
		float Avg;
		
			
		void displayreport()
		{
			Total=M1+M2+gracemarks;
			Avg=Total/3;
		
			cout<<"\n Student Roll No: "<<RNo<<endl;
			cout<<" Mark 1: "<<M1<<endl;
			cout<<" Mark 2: "<<M2<<endl;
			cout<<" Grace Marks: "<<gracemarks<<endl;
			cout<<" Total: "<<Total<<endl;
			cout<<" Average: "<<Avg<<endl;
		}
};

int main()
{
	report r;
	
	cout<<endl<<"-----------\nStudent details:";
	r.getStudentData();
	cout<<endl<<"-----------\nGrace Marks details:";
	r.getSportsData();
	cout<<endl<<"-----------\nStudent Report:";
	r.displayreport();
}
