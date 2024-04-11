//PASS BY VALUE EXAMPLE FOR SWAPPING
#include<iostream>
using namespace std;
main()
{
      int a,b;
      void swap(int,int);
      cout<<"enter two numbers="; //function declaration
      cin>>a>>b;
      cout<<"\n before calling(in main) a="<<a<<"b ="<<b<<"\n";
      swap(a,b); //function calling with actual arguments
      cout<<"\n after calling (in main) a="<<a<<"b ="<<b<<"\n";
     
      return 0;
      }
      void swap( int x,int y) //function defination
      {
           int z;
           z=x;
           x=y;
           y=z;
           cout<<"after modification (in function) x="<<x<<"y ="<<y<<"\n";
           }
