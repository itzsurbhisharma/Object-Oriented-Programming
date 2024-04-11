//WAP TO FIND AREA OF CIRCLE USING FUNCTION OVERLOADING
#include<iostream>
using namespace std;
//void area(int a);
//void area(int a,int b);
void area(int =10,int =10,int =10);
main()
{
      int side,le,br,a,b,c;
     // cout<<"enter the side,length(le),breadth(br),a,b,c";
      //cin>>side>>le>>br>>a>>b>>c;
      area();
area(10,15);
      //area(5);
      
      }
      void area(int x)
      {
           cout<<"the area of square ="<<x*x<<"\n";
           }
           void area(int x,int y)
           {
                cout<<"area of rectangle"<<x*y<<"\n";
                }
                void area(int x,int y,int z)
                {
                     float s=(x+y+ z)/2;
                     float ar;
                     ar=sqrt(s*(s-x)*(s-y)*(s-z));
                     cout<<" area of triangle using hero's formula"<<ar<<"\n";
                     }
                     
           
