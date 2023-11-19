#include<iostream>
using namespace std;
static int scount=1;
static int ctcount=1;
static int stcount=1;
class student
{
	int STDID,phone,Subject1_IA,Subject2_IA,Subject3_IA,Subject1_ESE,Subject2_ESE,Subject3_ESE,Subject1_attendance,Subject2_attendance,Subject3_attendance,Total,CGPA;
	string Name,email,eligibleStatus;
	
	public:
		student()
		{
			STDID=scount;
			scount=scount+1;
			Subject1_IA=0;
			Subject2_IA=0;
			Subject3_IA=0;
			Subject1_ESE=0;
			Subject2_ESE=0;
			Subject3_ESE=0;
			Subject1_attendance=0;
			Subject2_attendance=0;
			Subject3_attendance=0;
			Total=0;
			CGPA=0;	
		}
		
		void getdata()
		{
			cout<<" Kindly enter name: "<<endl;
			cin>>Name;
			cout<<" Kindly enter Phone number: "<<endl;
			cin>>phone;
			cout<<" Kindly enter Email: "<<endl;
			cin>>email;
		}
		
		
		void displaycard()
		{
			cout<<" Student ID: "<<STDID<<endl;
			cout<<" Name: "<<Name<<endl;
			cout<<" Phone: "<<phone<<endl;
			cout<<" Email: "<<email<<endl;
			cout<<" Subject1 IA: "<<Subject1_IA<<endl;
			cout<<" Subject2 IA: "<<Subject2_IA<<endl;
			cout<<" Subject3 IA: "<<Subject3_IA<<endl;
			cout<<" Subject1 ESE: "<<Subject1_ESE<<endl;
			cout<<" Subject2 ESE: "<<Subject2_ESE<<endl;
			cout<<" Subject3 ESE: "<<Subject3_ESE<<endl;
			cout<<" Subject1 attendance: "<<Subject1_attendance<<endl;
			cout<<" Subject2 attendance: "<<Subject2_attendance<<endl;
			cout<<" Subject3 attendance: "<<Subject3_attendance<<endl;
			cout<<" Total: "<<Total<<endl;
			cout<<" CGPA: "<<CGPA<<endl;
			cout<<" Eligible status: "<<eligibleStatus<<endl;		
		}
				
		~student()
		{
		}	
		
		friend class class_teacher;
		friend class subject_teacher;
};

class class_teacher
{
	int EMPID,phone;
	string Name,email;
	
	public:
		class_teacher()
			{
				EMPID=ctcount;
				ctcount=ctcount+1;
			}
			
		void getdata()
		{
			cout<<" Kindly enter name: "<<endl;
			cin>>Name;
			cout<<" Kindly enter Phone number: "<<endl;
			cin>>phone;
			cout<<" Kindly enter Email: "<<endl;
			cin>>email;
		}
		
		void calculateTotal(student &t)
		{
			t.Total=0;
			t.Total+=t.Subject1_IA+t.Subject2_IA+t.Subject3_IA+t.Subject1_ESE+t.Subject2_ESE+t.Subject3_ESE;
		}
			
		
		void calculateCGPA(student &t)
		{
			t.CGPA=0.1*t.Total;
		}
			
		void eligibility(student &t)
		{
			int sum;
			sum+=t.Subject1_attendance+t.Subject2_attendance+t.Subject3_attendance;
			
			if (sum<80*2)
				t.eligibleStatus="False";
			else
				t.eligibleStatus="ELigible";
		}
		
		void showRanklist(student t[])
		{
			int i,j,n=5;
			student temp;
			
			for(i=0;i<n;i++)
			{		
				for(j=i+1;j<n;j++)
				{
					if(t[i].Total<t[j].Total)
					{
						temp =t[i];
						t[i]=t[j];
						t[j]=temp;
					}
				}
			}
	
		
			cout<<"-----------\nRANK LIST:"<<endl;
			cout<<"STDID  Total  Rank "<<endl;
			int rank=1;
			for(i=0;i<n;i++)
			{
				cout<<t[i].STDID<<"\t"<<t[i].Total<<"\t"<<rank<<endl;
				rank+=1;
			}
				cout<<endl;	
			 
		}					
};

class subject_teacher
{
	int EMPID,phone;
	string Name,email;
	
	public:
		subject_teacher()
		{
			EMPID=stcount;
			stcount=stcount+1;
		}
		
		void getdata()
		{
			cout<<" Kindly enter name: "<<endl;
			cin>>Name;
			cout<<" Kindly enter Phone number: "<<endl;
			cin>>phone;
			cout<<" Kindly enter Email: "<<endl;
			cin>>email;
		}
		
		void enterMarks(student &t)
		{
			cout<<" Kindly enter Subject1 IA mark: ";
			cin>>t.Subject1_IA;
			cout<<" Kindly enter Subject2 IA mark: ";
			cin>>t.Subject2_IA;
			cout<<" Kindly enter Subject3 IA mark: ";
			cin>>t.Subject3_IA;
			
			cout<<" Kindly enter Subject1 ESE mark: ";
			cin>>t.Subject1_ESE;
			cout<<" Kindly enter Subject2 ESE mark: ";
			cin>>t.Subject2_ESE;
			cout<<" Kindly enter Subject3 ESE mark: ";
			cin>>t.Subject3_ESE;
			
		}
		
		void enterAtt(student &t)
		{
			cout<<" Kindly enter Subject1 attendance mark: ";
			cin>>t.Subject1_attendance;
			cout<<" Kindly enter Subject2 attendance mark: ";
			cin>>t.Subject2_attendance;
			cout<<" Kindly enter Subject3 attendance mark: ";
			cin>>t.Subject3_attendance;
		}		
};

	
int main()
{
	student s[5];
	class_teacher ct;
	subject_teacher st[3];
	
	cout<<endl<<"-----------\nClass Teacher details:"<<endl;
	ct.getdata();
	
	cout<<endl<<"-----------\nSUbject Teachers details:"<<endl;
	for(int i=0;i<3;i++)
	{	cout<<endl<<"Enter teacher "<<1+i<<" details:"<<endl;
		st[i].getdata();
	}
	
	for(int i=0;i<5;i++)
	{	
		cout<<endl<<"-----------\nEnter student "<<i+1<<"  details:"<<endl;
		s[i].getdata();
		
		st[i].enterMarks(s[i]);
		st[i].enterAtt(s[i]);
		ct.calculateTotal(s[i]);
		ct.calculateCGPA(s[i]);
		ct.eligibility(s[i]);
			
 		
 	}
 	
 	
 	cout<<endl<<"-----------\nGrade Cards:"<<endl;
	for(int i=0;i<5;i++)
	{	
		cout<<endl<<"-----------\nGrade card of Student "<<i+1<<endl;
		s[i].displaycard();		
	}
	
	ct.showRanklist(s);
		
	return 0;
 
}
