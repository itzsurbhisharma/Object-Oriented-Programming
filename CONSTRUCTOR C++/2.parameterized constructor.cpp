//PARAMETERIZED CONSTRUCTOR
#include<conio.h>
#include<iostream.h>
class rectangle
{
      private:
              int length,breadth;
              public:
                     rectangle(int a,int b) //PARAMETERISED CONSTRUCTOR
                     {
                                   length=a;breadth=b;
                                   cout<<"\nI am parameterised constructor ";
                                   }
                                  rectangle()
                                   {
                                              cout<<"enter two values";
                                              cin>>length>>breadth;
                                              cout<<"\n I AM DEFAULT CONSTRUCTOR";
                                              }
                                   int area()
                                   {
                                       return(length*breadth);
                                       }
                                       };
                                       int main()
                                       {
                                          // rectangle r1(5,6);
                                         rectangle r1;
                                           cout<<"\nArea of rectangle 1 = "<<r1.area();
                                           rectangle r2(7,8);
                                        // rectangle r2;
                                           cout<<"\nArea of rectangle 2 ="<<r2.area();
                                           getch();
                                           return 0;
                                           }
                                           
