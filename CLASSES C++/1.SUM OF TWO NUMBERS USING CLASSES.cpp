#include<conio.h>
#include<iostream.h>
class sum //name of class is sum
{
      private: //access specifier(by default its private)
      int a,b; //data members
      public:
      void calculate(int x,int y) //member function
                  {
                       int c=x+y;
                       cout<<"the sum of two number is "<<c;
                       }
                       } s2;// one of the object
                       main()
                       {
                       class sum s1;//object creation
                            s1.calculate(2,3); //calling of data members
                            s2.calculate(20,30);
                             getch();
                             return 0;
                             }
                             
