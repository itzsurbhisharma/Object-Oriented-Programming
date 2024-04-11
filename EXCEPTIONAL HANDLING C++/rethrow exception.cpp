#include<iostream>
#include<conio.h>
using namespace std;
 void fun()
 {
  try
  {
   throw 'a';
}
   catch(char i)
   {
    cout<<"caught exception inside function"<<endl;
    throw;
}
}
int main()
{
    cout<<"start of main"<<endl;
    try
     {
         fun();
     }
catch(char i)
{
    cout<<"rethrow exception caught"<<endl;
    throw 'b';
}
catch(char j)
{
cout<<"end of main"<<endl;
}
getch();
return 0;
}                         
                                    
