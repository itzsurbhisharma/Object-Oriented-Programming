//PROGRAM TO DEMONSTRATE THE USE OF THIS POINTER
#include<iostream.h>
#include<conio.h>
class rectangle
{
      private:
              int l,b;
              public:
                     void setdata(int i,int j)
                     {
                          cout<<"address of object that generates setdata() call :"<<this<<"\n";
                          //this->l=i; //equivalent to l=i
                          //this->b=j; //equivalent to b=j
                          l=i;
                          b=j;
                          }
                          void area()
                          {
                               cout<<"address of object that generates area() call ="<<this<<"\n";
                             //  cout<<"Area = "<<this->l*this->b;
                             cout<<"area "<<l*b;
                               }
                               };
                               int main()
                               {
                                   rectangle r1;
                                   r1.setdata(10,15);
                                   r1.area();
                                  // r2.setdata(2,3);
                                  // r2.area();
                                   getch();
                                   return 0;
                                   }
