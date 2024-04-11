#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{ string str;
    int a;
    char b;
    char c;
  int age;
  cout<<"enter age of voting:";
  cin>>age;
  try
  {
     if(age>0&&age<18)
     throw a;
     if(age>120)
     throw b;
     if(age<0)
     throw str;
     cout<<"eligible for voting";
     }
     catch(char)
     {
       cout<<"valid age but not eligible for voting"<<endl;
     }              
    catch(string)
    {
      cout<<"invalid age for voting";
      }
      getch();
}          
