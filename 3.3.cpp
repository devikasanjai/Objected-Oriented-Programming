#include<iostream>
using namespace std;

class student
{
	
	
	public:
		int RNo;
		string sname;
		
		void getStudentData()
		{
			cout<<" \n Kindly enter Roll Number of Student: ";
			cin>>RNo;
			cout<<" Kindly enter Student's Name: ";
			cin>>sname;
		}	
};

class test:public student
{
	public:
		int markSub1,markSub2,markSub3;
		
		void getMarks()
		{
			cout<<"\n Kindly enter Student's Mark of Subject 1: ";
			cin>>markSub1;
			cout<<"\n Kindly enter Student's Mark of Subject 2: ";
			cin>>markSub2;
			cout<<"\n Kindly enter Student's Mark of Subject 3: ";
			cin>>markSub3;
		}
		
};

class result:public test
{
	public:
		int Total;
			
		void putresult()
		{
			Total=markSub1+markSub2+markSub3;
		
			cout<<"\n Student Roll No: "<<RNo<<endl;
			cout<<" Student Name: "<<sname<<endl;
			cout<<" Mark 1: "<<markSub1<<endl;
			cout<<" Mark 2: "<<markSub2<<endl;
			cout<<" Mark 3: "<<markSub1<<endl;
			cout<<" Total: "<<Total<<endl;
		}
};

int main()
{
	result r;
	
	cout<<endl<<"-----------\nStudent details:";
	r.getStudentData();
	cout<<endl<<"-----------\nTest details:";
	r.getMarks();
	cout<<endl<<"-----------\nStudent Report:";
	r.putresult();
}
