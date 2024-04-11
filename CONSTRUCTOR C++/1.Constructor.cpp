//USE OF CONSTRUCTOR MEMBER FUNCTION TO INITIALIZE OBJECT DURING ITS CREATION
#include<iostream.h>
#include<conio.h>
class rectangle
{
      private:
              int length,breadth;
             
              public:
                  rectangle() //constructor defination
                     {
                                 length=5;breadth=6;
                                 
                                 } 
                                 
                                int area()//  member function
                                 {
                                     return(length*breadth);
                                     } 
                                     };
                                     int main()
                                     {
                                         rectangle r1,r2;
                                         cout<<"Area of rectangle ="<<r1.area();
                                        cout<<r2.area();
                                         getch();
                                         return 0;
                                         }
                                         
                                 
