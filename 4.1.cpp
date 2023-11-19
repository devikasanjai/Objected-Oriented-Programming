#include <iostream>
#include <stdlib.h>
using namespace std;

class account {
	public:
		string name;
		long int accno;
		string acctype;
		
	account()
	{
		name="Aadarsh";
		accno=111222333;
	}
};

class curacct: public account {
	public:
		float camt;
		
		curacct()
		{
			acctype="Current";
			camt=0;
		}
		
	friend void display(curacct &a);
	friend void deposit(curacct &a,float amt);
	friend void withdraw(curacct &a, float amt);
};

class savacct: public account {
	public:
		float samt;
		float intrate;
		
		savacct()
		{
			acctype="Savings";
			samt=0;
			intrate=0.05;
		}
	
	friend void display(savacct &a);
	friend void deposit(savacct &a,float amt);
	friend void interest(savacct &a);
	friend void withdraw(savacct &a, float amt);
};

void display(curacct &a)
{
	cout<<"\n   Account Owner: "<<a.name<<endl<<"   Account No:"<<a.accno<<"\n   Current Account Balance: "<<a.camt<<endl;
}

void display(savacct &a)
{
	cout<<"\n   Account Owner: "<<a.name<<endl<<"   Account No:"<<a.accno<<"\n   Savings Account Balance: "<<a.samt<<endl;
}

void deposit(curacct &a,float amt)
{
	a.camt+=amt;
	cout<<"\n   Amount Deposited in Current Account\n";
}

void deposit(savacct &a,float amt)
{
a.samt+=amt;
cout<<"\n   Amount Deposited in Savings Account\n";
}

void interest(savacct &a)
{
	cout<<"\n   Interest Rate: "<<a.intrate<<endl;
	a.samt+=(a.samt*a.intrate);
	cout<<"\n   Interest Deposited\n";
}

void withdraw(curacct &a, float amt)
{
	if(a.camt<amt)
		cout<<"\n   Insufficient Funds!\n";
	else
	{
		a.camt-=amt;
		cout<<"\n   Cash Withdrawn from Current Account\n";
	}
}

void withdraw(savacct &a, float amt)
{
	if(a.samt<amt)
		cout<<"\n   Insufficient Funds!\n";
	else
	{
		a.samt-=amt;
		cout<<"\n   Cash Withdrawn from Savings Account\n";
	}
}

int main()
{
	curacct current;
	savacct savings;
	int ch;
	while(1)
	{
		cout<<"_____________________Bank Menu________________"<<endl;
		cout<<"1. Display Balance\t\t2.Deposit Cash"<<endl;
		cout<<"3.Deposit Interest\t\t4.Withdraw Cash"<<endl;
		cout<<"5.Exit"<<endl;
		cout<<"Kindly enter your choice: ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
			{
				int a;
				cout<<"   Kindly choose account type to display balance\n   1.Current\n   2. Savings\n   Enter Choice: ";
				cin>>a;
				switch(a)
				{
					case 1:
					{
						display(current);
						break;
					}
	
					case 2:
					{
						display(savings);	
						break;
					}
				}
			break;
			}
			
		case 2:
		{
			int a;
			cout<<"   Kindly choose account type to deposit into?\n   1.Current\n   2. Savings\n   Enter Choice: ";
			cin>>a;
			switch(a)
			{
				case 1:
				{
					int dep;
					cout<<"   Kindly enter Deposit amount:";
					cin>>dep;
					deposit(current,dep);
					break;
				}
				
				case 2:
				{
					int dep;
					cout<<"   Kindly enter Deposit amount:";
					cin>>dep;
					deposit(savings,dep);
					break;
				}
			}
			break;
	}
	
		case 3:
		{
			interest(savings);
			break;
		}
	
		case 4:
		{
			int a;
			cout<<"   Kindly choose account type to withdraw from?\n   1.Current\n   2. Savings\n   Enter Choice: ";
			cin>>a;
			switch(a)
			{
				case 1:
				{
					int take;
					cout<<"   Kindly enter Withdrawal amount:";
					cin>>take;
					withdraw(current,take);
					break;
				}
				
				case 2:
				{
					int take;
					cout<<"   Kindly enter Withdrawal amount:";
					cin>>take;
					withdraw(savings,take);
					break;
				}
			}
			break;
		}
		
		case 5:
		{
			cout<<"   Succesfully exiting program"<<endl;
			exit(0);
		}
	
		default:
		{
			cout<<"   Wrong choice"<<endl;
			break;
		}
		
	}
	cout<<"\n\n";
	}
}
