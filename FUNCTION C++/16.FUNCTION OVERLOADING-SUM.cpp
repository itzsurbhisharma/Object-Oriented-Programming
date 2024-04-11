#include<conio.h>
#include<iostream.h>
void sum(int,int);
void sum(double,double);
void sum(char,char);
main()
{
      int a=10,b=20;
      double c=7.52,d=8.14;
      char e='A',f='B';
      sum(a,b);
      sum(c,d);
      sum(e,f);
      getch();
      return 0;
      }
      void sum(int x,int y)
      {
           cout<<"\nsum of two integers is ="<<x+y;
           }
           void sum(double x,double y)
           {
                cout<<"\nsum of double numbers is ="<<x+y;
                }
                void sum (char x,char y)
                {
                     cout<<"\nsum of two characters is= "<<x+y;
                     }
                     
