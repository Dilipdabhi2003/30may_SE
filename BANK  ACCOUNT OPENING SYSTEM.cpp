#include<iostream>
#include<cstdlib>
#include<stdbool.h>
#include<ctime>
using namespace std;
void service()
{
	cout<<"\t********** Want Did You Want ?**********"<<endl;
	cout<<"\t\tpress.1. to Diposit a Amount"<<endl;
	cout<<"\t\tpress.2. to Withdraw a Amount "<<endl;
	cout<<"\t\tpress.3. to Check the Balance"<<endl;
	cout<<"\t\tpress.4. to Exit"<<endl;
	cout<<"\t*****************************************\n"<<endl;
}

main()
{
	cout<<"\t\t\t\t	|| WELCOME TO STATE BANK OF INDIA ||"<<endl<<endl;
	cout<<"Create a Your Account ! Please Fill The Details..."<<endl;
	
	string name;
	cout<<"\nEnter Your Name :"<<endl;
	cin>>name;
	
	string address;
	cout<<"\nEnter Your Address :"<<endl;
	cin>>address;
	
	string account_type;
	cout<<"\nWhat kind of Account do You Want to Open || SAVING or CURRENT "<<endl;
	cout<<"Enter Your Account Type :"<<endl;
	cin>>account_type;
	
	int account_number;
	cout<<"\nYour Account Number is: 1234567890"<<endl;
	
	string password;
	cout<<"\nCreate a Your Password like::name@123"<<endl;
	cin>>password;
	
	int balance;
	cout<<"\nHow much Money Do You Want to First Diposit *minimum diposit is 3000"<<endl;
	cin>>balance;
	
	cout<<"\nDO YOU WANT TO USE OUR SERVICE???"<<endl;
	cout<<"||YES = Press 1 OR NO = Press 2 ||"<<endl;
	
	
	int want;
	cin>>want;
	if(want==1)
		{
		string cpassword;
			cout<<"\nEnter your Password :"<<endl;
			cin>>cpassword;
			if(password==cpassword)
			{
	
				service();
				
				bool status=true;
			
				while(status)
				{
					int chooses;
					cout<<"\nEnter Your Chooses :"<<endl;
					cin>>chooses;
					
						int amount2;
						int bal;
					
					if(chooses==1)
					{
						cout<<"\nYou Chooses Diposit a Amount"<<endl;
						cout<<"Enter Your Amount :"<<endl;
						cin>>amount2;
						
						
						balance=balance+amount2;
						cout<<"Your Balance after Diposit is :"<<balance;
						
					}
					else if(chooses==2)
					{
						cout<<"\nYou Chooses Withdraw a Amount "<<endl;
						cout<<"Enter Your Amount :"<<endl;
						cin>>amount2;
					
						if(balance>amount2)
						{
							balance=balance-amount2;
							cout<<"Your Balance after Withdraw is :"<<balance<<endl;
						}
						else
						{
							cout<<"Did you not have Balance :";
							break;
						}
					}
					else if(chooses==3)
					{
						cout<<"\nThis is Your Balance : "<<balance<<endl;
						
					}
					else if(chooses==4)
					{
						cout<<"\nTHANK YOU FOR VISIT "<<endl;
						status=false;
					}
	
				}
			}
			
			else 
			{
				cout<<"\nYou Password is Wrong !!! you can't use service"<<endl;
			}

	}
	else if(want==2)
	{
		cout<<"\nTHANK YOU FOR VISIT "<<endl;
	}
	else
	{
		cout<<"INVALID OPTION"<<endl;
	}
	
}
