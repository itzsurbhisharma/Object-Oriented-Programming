#include<conio.h>
#include<iostream.h>
int sum(int,int);
void sum(int,int);

main()
{
      int a=10,b=20;
      int c=40,d=30;
      int z;
      sum(a,b);
      sum(c,d);
      cout<<"value of z ="<<z;
    
      getch();
      return 0;
      }
      void sum(int x,int y)
      {
           cout<<" sum of two integers is ="<<x+y;
           }
           int sum(int x,int y)
           {int w;
           w=x+y;
           return w;
                
                }
               
                     
