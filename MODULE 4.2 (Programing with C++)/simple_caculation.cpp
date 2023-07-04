#include<iostream>
using namespace std;
class calculation
{
	public:
		int number1;
		int number2;
		void Inputdata()
            {
				cout<<"Enter value of number 1 :"<<endl;
				cin>>number1;
				
				cout<<"Enter value of number 2 :"<<endl;
				cin>>number2;
            }
            
        void Displaydata()
        	{
        		cout<<"Additon of number 1 and number 2 is :"<<number1+number2<<endl;
        		cout<<"Subtraction of number 1 and number 2 is :"<<number1-number2<<endl;
        		cout<<"Multipilcation of number 1 and number 2 is :"<<number1*number2<<endl;
        		cout<<"Division of number 1 and number 2 is :"<<number1/number2<<endl;
			}
};
main()
{
	calculation obj;
	obj.Inputdata();
	obj.Displaydata();
}
