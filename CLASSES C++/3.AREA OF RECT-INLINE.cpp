//CALCULATE THE AREA OF RECTANGLE THROUGH CLASS
#include<iostream>
using namespace std;
class rectangle
{
      private:    //Access specifier 
              int a, b;  //data members
              public:
 //                   
                     void setdata(int x,int y)  //member function
                     {
                          a=x;
                          b=y;
                          }
                          void area()    //member function
                          {
                               int ar=a*b;
                               cout<<"\n Area of rectangle ="<<ar;
                               }
                               }; //end of class specification and objects can be declared here same as structure
                               int main()
                               {
                                   rectangle r1,r2;//,r2; //object defination
                                   r1.setdata(5,10); //object r1 calls setdata()
                                   cout<<"Rectangle 1";
                                   r1.area();      //object r1 calls area()
                                   r2.setdata(10,20); //objects r2 calls setdata ()
                                 cout<<"\n rectangle 2";
                                  r2.area();   //object r2 calls area()
            
                                   return 0;
                                   }
