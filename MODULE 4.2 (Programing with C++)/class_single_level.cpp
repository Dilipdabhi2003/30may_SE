#include<iostream>
using namespace std;
class cricketer
{
	public:
		void batsman(int players,int totalrun, float avgrun)
		{
			cout<<"The numbers of players is :";
			cin>>players;
			cout<<"Total players of match is :"<<players<<endl;
			
			cout<<"Total runs is :";
			cin>>totalrun;
			cout<<"Total runs of bats-man is :"<<totalrun<<endl;
			
			
			avgrun=totalrun/players;
			cout<<"Averange runs of bats-man is :"<<avgrun<<endl;
			}
};
class datainput : public cricketer
{
	public:
		void inputdata()
		{
			cout<<"perfomance is excellent"<<endl;
		}
		
};
main()
{
	datainput obj;
	obj.batsman(5,100,20);
	obj.inputdata();
	
}
