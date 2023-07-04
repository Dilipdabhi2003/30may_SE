#include<iostream>
using namespace std;
class student 
{
	public:
		void percentage(int total_mark,int subject,float percentage)
		{
			cout<<"You have 5 subject"<<endl;
			
			cout<<"Enter your total mark from 500 :"<<endl;
			cin>>total_mark;
			
			percentage=(total_mark*100)/500;
			cout<<"Your percentage is :"<<percentage<<endl;
		}
};
class teacher
{
	public:
		void salary(int salary)
		{
			cout<<"Enter the salary :";
			cin>>salary;
			cout<<"teacher salary is :"<<salary<<endl;
		}
};class person: public student,public teacher
{
	public:
		void name_age(string name,int age)
		{
			cout<<"Enter your name :";
			cin>>name;
			cout<<"The name of person is :"<<name<<endl;
			
			cout<<"Enter your age :";
			cin>>age;
			cout<<"The age of person is :"<<age<<endl;
		}
};
main()
{
	person obj;
	obj.percentage(1,2,3);
	obj.salary(11);
	obj.name_age("Dilip",10);
}
