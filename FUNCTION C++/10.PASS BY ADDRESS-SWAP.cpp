//PASS BY ADDRESS(BY POINTER) EXAMPLE FOR SWAPPING
#include<conio.h>
#include<iostream.h>
main()
{
      int a,b;
      void swap(int *,int *);
      cout<<"enter two numbers=";
      cin>>a>>b;
      cout<<"\n before calling(in main) a="<<a<<"b ="<<b<<"\n";
      swap(&a,&b);
      cout<<"\n after calling (in main) a="<<a<<"b ="<<b<<"\n";
      getch();
      return 0;
      }
      void swap( int *x,int *y)
      {
           int z;
           z=*x;
           *x=*y;
           *y=z;
           cout<<"after modification (in function) x="<<*x<<"y ="<<*y<<"\n";
           }
