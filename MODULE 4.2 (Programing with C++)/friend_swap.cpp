#include<iostream>
using namespace std;
class A
{
	private:
		int a;
		int b;
		
		public:
			friend void setData();
};
void setData()
{
	A obj;
	obj.a=100;
	obj.b=50;
	
	obj.a=obj.a+obj.b;
	
	obj.b=obj.a-obj.b;
	cout<<"The value of B is :"<<obj.b<<endl;
	
	obj.a=obj.a-obj.b;
	cout<<"The value of A is :"<<obj.a<<endl;
}
main()
{
	setData();
}
