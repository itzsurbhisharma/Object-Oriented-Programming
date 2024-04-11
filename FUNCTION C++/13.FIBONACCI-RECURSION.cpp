//WAP TO PRINT FIBONACCI SERIES USING RECURSION
#include<iostream.h>
#include<conio.h>
main()
{
      int fib(int);
      int n;
      cout<<"\n enter number of terms =";
      cin>>n;
      cout<<"0 ";
      for(int i=1;i<=n;i++)
      cout<<fib(i)<<" ";
      getch();
      return 0;
      }
      int fib(int m)
      {
          if(m==1||m==2)
          return(1);
          else
          return(fib(m-1)+fib(m-2));
          }
          
