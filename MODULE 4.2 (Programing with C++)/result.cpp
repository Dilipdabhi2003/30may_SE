#include<iostream>
using namespace std;
class student
{
	public:
		void rollnum(int rollnumber)
		{
			cout<<"Enter the roll number :";
			cin>>rollnumber;
			cout<<"Your roll number is :"<<rollnumber<<endl;
		}
};
class test : public student
{
	public: 
	void mark(int subject1,int subject2,int total)
	{
		cout<<"Enter the obtained marks of subject 1 :";
		cin>>subject1;
		cout<<"Your obtained marks of subject 1 is :"<<endl;
		
		
		cout<<"Enter the obtained marks of subject 2 :";
		cin>>subject2;
		cout<<"Your obtained marks of subject 2 is :"<<endl;
		
		total=subject1+subject2;
		cout<<"The total of two subject is :"<<total<<endl;
	}
};
class result: public test
{
	public:
		void totalmarks()
		{
			cout<<"this is your result";
		}
};
main()
{
	result object;
	object.rollnum(1);
	object.mark(1,2,3);
	object.totalmarks();
}
