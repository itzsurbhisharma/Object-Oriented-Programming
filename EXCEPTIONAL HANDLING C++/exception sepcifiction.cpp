#include<iostream>
#include<conio.h>
using namespace std;
void func(int val) throw( int, char)
{
     if(val==0)
     throw 'a';
     if(val==1)
     throw 10.2;
     }
     int main()
     {
         cout<<"start of main"<<endl;
         try
         {
         func(1);
         }
         catch(int)
         {
         cout<<"int-type exception catched";
         }
         catch(char)
         {
         cout<<"char-type exception catchrd";
         }
         getch();
         return 0;
         }
