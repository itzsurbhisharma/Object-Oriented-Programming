#include<iostream>
using namespace std;
main()
{
      int i=10;
      int &j=i;//refrence variable
      cout<<"i ="<<i<<"j ="<<j<<"\n";
      i=20;
      cout<<"i="<<i<<"j ="<<j;
      
      return 0;
      }
      
