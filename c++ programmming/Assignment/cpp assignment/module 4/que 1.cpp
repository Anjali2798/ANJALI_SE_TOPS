/*Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)*/
#include<iostream>
using namespace std;
class cricketer{
        protected:
		 int run,average_run;
		 	
};
class batsman:public cricketer
{
	public:
		void get()
		{
			cout<<"enter total runs ";
			cin>>run;
			
			average_run=run/100;
			cout<<"average run ";
			//cin>>average_run;
			cout<<"best performance ";
		}
};
int main()
{
       batsman bm;
       bm.get();
	return 0;
}
