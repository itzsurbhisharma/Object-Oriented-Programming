//NO RETURN NO PARAMETER
#include<iostream>
using namespace std;
int main()
{
   void sum(void); //function declaration
    sum(); //function call
    cout<<"\n*no parameter and no return type* \n";
    sum();
    return 0;
}
sum() //function definition
	{
     int a, b;
     cout<<"Enter two values:";
     cin>>a>>b;
     cout<<"\nSum is"<<a+b;
     return a;
     }
