//WAP TO ILLUSTRATE CONSTRUCTOR WITH DEFAULT ARGUMENTS
#include<iostream.h>
#include<conio.h>
class rectangle
{
      private:
              int l,b;
              public:
                     rectangle(int x=2,int y=4)
                     {
                                   l=x;
                                   b=y;
                                   cout<<"i am parametrized";
                     }
                   /*  rectangle()
                     {
                                cout<<"i am default";
                                }*/
                     void area()
                     {
                          cout<<"\narea is = "<<l*b;
                     }
                     };
                     
                                   
int main()
{
    rectangle r;
r.area();
    rectangle r1(3,6);
    r1.area();
    rectangle r2(10);
    r2.area();
    getch();
}
