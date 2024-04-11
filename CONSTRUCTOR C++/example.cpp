#include<iostream>

using namespace std;
class student
{
	int age;
	float cgpa;
	public:
		student(int a, float b);//declaring the constructo
		void getdata()
		{
			cout<<"Age="<<ends<<age<<endl;
			cout<<"Cgpa="<<ends<<cgpa<<endl;
		}
		
};
		student::student(int a, float b):age(a),cgpa(b)
		{	
		}
main()
{
	student s2(20,9.8);
	s2.getdata();
}
