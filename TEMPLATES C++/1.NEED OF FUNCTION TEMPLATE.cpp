//NEED OF THE FUNCTION TEMPLATE
#include<iostream.h>
#include<conio.h>
int min(int a,int b)
{
    return (a<b)?a:b;
}
float min(float a,float b)
{
       return (a<b)?a:b;
       }
       char min(char a,char b)
       {
             return (a<b)?a:b; 
             }
             int main()
             {
                 int x,y;
                 float m,n;
                 char c1,c2;
                 cout<<"\nenter the two integer values";
                 cin>>x>>y;
                 cout<<"\nMinimum of two integer value is = "<<min(x,y);
                 cout<<"\nenter the two float values";
                 cin>>m>>n;
                 cout<<"\nMinimum of two float value is = "<<min(m,n);
                 cout<<"\nenter two character values";
                 cin>>c1>>c2;
                 cout<<"\nMinimum of two character value is = "<<min(c1,c2);
                 getch();
                 return 0;
                 }
