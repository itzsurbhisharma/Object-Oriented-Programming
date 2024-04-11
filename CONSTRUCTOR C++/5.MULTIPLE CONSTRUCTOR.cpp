//WAP TO ILLUSTRATE MULTIPLE CONSTRUCTORS IN ONE
#include<iostream.h>
#include<conio.h>
class integer
{
      private:
              int x;
              public:
                     integer()
                     {
                              x=10;
                              }
                              integer(int y)
                              {
                                          x=y;
                                          }
                                          integer(integer &b)
                                          {
                                                          x=b.x;
                                                          }
                                                          void display()
                                                          {
                                                               cout<<x<<"\n";
                                                               }
                                                               };
                                                               int main()
                                                               {
                                                                   integer a,b(15),c(b);
                                                                   cout<<"Member data of a = ";
                                                                   a.display();
                                                                   cout<<"Member data of b = ";
                                                                   b.display();
                                                                   cout<<"Member data of c = ";
                                                                   c.display();
                                                                   getch();
                                                                   return 0;
                                                                   }
                                                          
                              
              
