//Write a C++ Program to illustrates the use of Constructors in multilevel inheritance
 #include<iostream>
 using namespace std;
 class student{
 	protected:
 	int roll_no;
 };
 class test:public student{
 	protected:
 		int hindi,maths;
 };
 class result:public test{
 	int total;
 	public:
 		result()
 		{
 			cout<<"enter roll no ";
 			cin>>roll_no;
 			cout<<"enter hindi marks";
 			cin>>hindi;
 			cout<<"enter maths marks ";
 			cin>>maths;
 			
		 }
		 void display()
		 {
		 	cout<<"roll_no is "<<roll_no;
			 cout<<" \ntotal marks is "<<hindi+maths;
		 }
 };
 int main()
 {
    result obj;
    
    obj.display();
 	return 0;
 }