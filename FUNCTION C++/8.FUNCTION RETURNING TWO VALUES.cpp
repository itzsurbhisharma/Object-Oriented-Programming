#include<iostream.h>
#include<conio.h>
main()
{
      void cal_rect(int,int,int &,int &);
      int l,b,area,perimeter;
      cout<<"enter length and breadth of rectangle";
      cin>>l>>b;
      cal_rect(l,b,area,perimeter);
      cout<<"\n area of rectangle is "<<area;
      cout<<"\n perimeter of rectangle is "<<perimeter;
      getch();
      return 0;
      }
      void cal_rect(int x,int y,int &ar,int &pr)
      {
           ar=x*y;
           pr=2*(x+y);
           }
           
