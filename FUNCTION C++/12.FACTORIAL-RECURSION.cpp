//PROGRAM TO FIND FACTORIAL OF A NUMBER USING RECURSION
#include<conio.h>
#include<iostream.h>
int main()
{
      int fact(int);//function declaration
      int x,f;
      cout<<"\n Enter the number whose factorial is to be found";
      cin>>x;
      f=fact(x);//function call
      cout<<"factorial of "<<x<<" is "<<f;
      getch();
      return 0;
      }
      int fact(int x)
      {
          int b;
          if(x==1)
          return (1);
          else
          b=x*fact(x-1);
          return (b);
          }
