#include<iostream>
//using namespace std;
class item
{

	double cost;
			int number;
		void getdata();//Declared
		//Inline Function
		public:
		void putdata()
		{
			getdata();
			cout<<"The number and cost:"<<"\n";
			cout<<number;
			cout<<cost;
		}
};
void item::getdata()
{
	cout<<"Enter the number and cost of item"<<"\n";
	cin>>number;
	cin>>cost;
	
}
main()
{
	item pen;
	item pencil;
	cout<<"For Pen"<<"\n";
	pen.putdata();
	cout<<"For Pencil"<<"\n";
	
	pencil.putdata();
}
