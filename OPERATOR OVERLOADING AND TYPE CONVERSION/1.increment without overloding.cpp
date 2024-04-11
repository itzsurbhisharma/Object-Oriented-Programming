//INCREMENTAING VALUE WITHOUR ANY OPERATOR
#include<conio.h>
#include<iostream.h>
class score
{
      private:
              int val;
              public:
                     score()
                     {
                            val=0;
                            }
                            void increment()
                            {
                                 val=val+1;
                                 }
                                 int show()
                                 {
                                     return (val);
                                     }
                                     };
                                     int main()
                                     {
                                     score s1,s2;
                                     cout<<"Initial value of s1 object = "<<s1.show();
                                     cout<<"\nInitial value of s2 object = "<<s2.show();
                                     s1.increment();
                                     
                                     s2.increment();
                                     cout<<"\nFinal value of object s1 = "<<s1.show();
                                     cout<<"\nFinal value of object s2 = "<<s2.show();
                                     getch();
                                     return 0;
                                     }
                                     
