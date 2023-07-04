#include<iostream>
using namespace std;
class bankaccount
{
	int accountnumber;
	string name;
	string account;
	int amount;   //Data member
	public:
		void inputData()  //Member Function or method
		{
			cout<<"Enter account number:"<<endl;
			cin>>accountnumber;
			cout<<"Enter name of dipositor:"<<endl;
			cin>>name;
			cout<<"Enter type of account:"<<endl;
			cin>>account;
			cout<<"Enter amount:"<<endl;
			cin>>amount;
		}
		void displayData()
		{
			cout<<"account number ="<<accountnumber<<endl;
			cout<<"name of dipositor ="<<name<<endl;
			cout<<"type of account ="<<account<<endl;
			cout<<"amount="<<amount<<endl;
			
		}
		
};
class MemberFunctions
{
	public:
		int assignvalues;
		int dipositamount;
		int withdrawamount;
		int balance;
		string name;
		
		void inputData()
		{
			cout<<"Enter Assign Values :"<<endl;
			cin>>assignvalues;
			cout<<"Enter Deposit an Amount :"<<endl;
			cin>>dipositamount;
			cout<<"Enter withdraw amount after checking balance:"<<endl;
			cin>>withdrawamount;
			cout<<"Enter balance and name :"<<endl;
			cin>>balance;
			cin>>name;
		}
		void displayData()
		{
				cout<<"assign values"<<assignvalues<<endl;
				cout<<"deposit an amount"<<dipositamount<<endl;
				cout<<"withdraw amount after checking balance"<<withdrawamount<<endl;
				cout<<"balance:"<<balance<<endl;
				cout<<"name:"<<name<<endl;
				
		}
		
		
};
		main()
		{
			bankaccount obj;
			obj.inputData();
			obj.displayData();
			
			MemberFunctions o;
			o.inputData();
			o.displayData();
		}
		
	

