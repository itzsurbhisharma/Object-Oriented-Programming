#include<iostream.h>
#include<conio.h>
class complex
{
      double real,img;
      public:
             complex()
             {
                      real=0.0;
                      img=0.0;
                      }
                      complex(double r,double i)
                      {
                                     real=r;
                                     img=i;
                                     
                                     }
                                     void show()
                                     {
                                          if(img>0)
                                          cout<<real<<"+"<<img<<"i";
                                          else
                                          cout<<real<<img<<"i";
                                          }
                                          friend complex operator+(complex,complex);
                                          };
                                          complex operator+(complex cc1,complex cc2)
                                          {
                                                  complex temp;
                                                  temp.real=cc1.real+cc2.real;
                                                  temp.img=cc1.img+cc2.img;
                                                  return (temp);
                                                  }
                                                  int main()
                                                  {
                                                      complex c3,c2(2.0,3.0),c1(1.5,2.5);
                                                      c3=c1+c2; //call to operator function'+'
                                                      c3.show();
                                                      getch();
                                                      return 0;
                                                      }
                                     
