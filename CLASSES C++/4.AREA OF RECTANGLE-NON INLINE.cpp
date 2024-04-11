//WAP TO FIND AREA OF RECTANGLE USING NON-INLINE MEMBER FUNCTION
#include<iostream.h>
using namespace std;
class rectangle
{
      private:
              int a,b;
              public:
                     void setdata(int ,int);//function declaration
                     void area();//function declaration
                     };//end of class
                     void rectangle::setdata(int x,int y)
                     {
                          a=x;
                          b=y;
                          }
                          void rectangle::area()
                          {
                               int ar=a*b;
                               cout<<"\n Area Of rectangle ="<<ar;
                               } 
                               int main()
                               {
                                   
                                   rectangle r1,r2;
                                   r1.setdata(20,30);
                                   cout<<"Rectangle r1.....";
                                   r1.area();
                                   r2.setdata(10,20);
                                   cout<<"\n rectangle r2....";
                                   r2.area();
                                   cout<<"\nsize of r1="<<sizeof(r1);
                                   
                                   return 0;
                                   }
