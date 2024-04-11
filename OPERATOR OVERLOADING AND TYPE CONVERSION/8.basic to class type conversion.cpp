//TYPE CONVERSION:-- BASIC TO USER DEFINED TYPE(CLASS)
#include<iostream>
using namespace std;
class btoc
{
private:
int val1,val2;
public:
	btoc(){
	}
	btoc(int x)
	{
		val1=x;val2=x;
	}
void show()
{
cout<<"Value1= "<<val1<<ends<<"Value2="<<val2;
}
};
 main()
 {
 	btoc obj;
 	int a;
 	cout<<"Enter the value of a\n";
 	cin>>a;
 	obj=a;
 	obj.show();
 }
								                                
                                       
                     
