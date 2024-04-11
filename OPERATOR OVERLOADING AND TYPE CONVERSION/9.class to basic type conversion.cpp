//TYPE CONVERSION:--USER DEFINED TYPE(CLASS)TO BASIC
#include<iostream>
using namespace std;
class ctob
{
private:
int val1,val2;
public:
void get()
{
cout<<"Value1= ";
cin>>val1;
cout<<"Value2=";
cin>>val2;
}
void show()
{
cout<<"Value1= "<<val1<<ends<<"Value2="<<val2<<endl;
}
operator int()
{
	return(val1);
}
};
 main()
 {
 	ctob obj;
 	obj.get();
 	obj.show();
 	int a;
 	a=obj;
 cout<<"a= "<<a;	
 }
								                                
                                       
                     
