//OVERLOADING FUNCTION CALL OPERATOR()
#include<conio.h>
#include<iostream.h>
class xyz
{
      public:

             int operator()(int num)
             {
                 
                 int cb=num*num*num;
                 return(cb);
                 }
                 };
                 int main()
                 {
                     xyz cube;
                     int a=5,res;
                     res=cube(a);//INVOKING FUNCTION CALL OPERATOR AND NOT CALLING FUNCTION CUBE
                     cout<<"cube of"<<a<<" is ="<<res;
                     getch();
                     return 0;
                     }
