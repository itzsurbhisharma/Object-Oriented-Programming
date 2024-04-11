//NO RETURN NO PARAMETER
#include<iostream>
using namespace std;
int main()
{
    void sum(int,int); //function declaration
   sum(25,45); //function call
    cout<<"\n*no parameter and with return type* \n";
    int x,y;
    cout<<"Enter two values:";
     cin>>x>>y;
    sum(x,y);
    return 0;
}
void sum(int a, int b) //function definition
	{
     int c=a+b;
     cout<<"Sum(as in c) is"<<c<<"\n";
     }
