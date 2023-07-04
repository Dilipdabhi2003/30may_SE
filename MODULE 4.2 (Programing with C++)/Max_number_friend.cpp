#include<iostream>

using namespace std;
class A
{
	private:
		int x,y;
		
		public:
			friend void setData();
};
void setData()
{
	A obj;
	obj.x;
	obj.y;
	
	cout<<"Enter the value of X :"<<endl;
	cin>>obj.x;
	
	cout<<"Enter the value of Y :"<<endl;
	cin>>obj.y;
	
	if(obj.x>obj.y)
	{
		cout<<"The Max number is X "<<endl;
	}
	else if (obj.x<obj.y)
	{
		cout<<"The Max number is Y "<<endl;
	}
	else
	{
		cout<<"There Are Same Number "<<endl;
	}
}
main()
{
	setData();
}
