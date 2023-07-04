#include<iostream>
using namespace std;
class calculation
{
	public:
		calculation()
		{
			cout<<"Welcome to Constuctor Calculation"<<endl<<endl;
		}
	calculation(int number1,int number2)
	{
				cout<<"Additon of number 1 and number 2 is :"<<number1+number2<<endl;
        		cout<<"Subtraction of number 1 and number 2 is :"<<number1-number2<<endl;
        		cout<<"Multipilcation of number 1 and number 2 is :"<<number1*number2<<endl;
        		cout<<"Division of number 1 and number 2 is :"<<number1/number2<<endl;
	}
};
main()
{
	calculation s1=calculation();
	calculation s2=calculation(100,50);
}
