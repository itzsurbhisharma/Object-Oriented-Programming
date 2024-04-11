//PROGRAM TO CALCULATE THE AREA OF DIFFERENT SHAPES 

#include<iostream>
using namespace std;
class shape
{
      protected:
                double a,b;
                public:
                       void read()
                       {
                            
                            cin>>a>>b;
                            }
                         virtual void cal_area()=0; //virtual function
                       
                                    };
                                    class rectangle : public shape
                                    {
                                          public:
                                                 void cal_area()
                                                 {
                                                      double area=a*b;
                                                      cout<<"area of rectangle ="<<area;
                                                      }
                                                      };
                                                      class triangle :public shape
                                                      {
                                                            public:
                                                                   void cal_area()
                                                                   {
                                                                        double area=(a*b)/2;
                                                                        cout<<"area of triangle = "<<area;
                                                                        }
                                                                        };
                                                                        int main()
                                                                        {
                                                                            shape *ptr; //pointer to shape class
                                                                            //shape s;
                                                                            rectangle r1;
                                                                            cout<<"enter the length and breadth of rectangle :";
                                                                            r1.read();
                                                                            ptr=&r1;//assigning address of r1 to ptr
                                                                            ptr->cal_area(); //invoke cal_area of rectangle
                                                                            triangle t1;
                                                                            cout<<"\nenter the base and perpendicular of triangle :";
                                                                            t1.read();
                                                                            ptr=&t1;
                                                                            ptr->cal_area();
                                                                            //getch();
                                                                            return 0;
                                                                            }
                                                 
