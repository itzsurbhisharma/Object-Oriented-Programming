//PROGRAM TO ILLUSTRATE THE USE OF COPY CONSTRUCTOR
#include<iostream.h>
#include<conio.h>
class student
{
      int roll;
      public:
          //   student()
            // {
              //        }
                      student(int a)
                      {
                                  roll=a;
                                  }
                                  student(student &t)//COPY CONSTRUCTOR
                                  {
                                                  roll=t.roll;
                                                  
                                                  } 
                                                  void display(void)
                                                  {
                                                       cout<<roll;
                                                       }
                                                       };
                                                       int main()
                                                       {
                                                           student s(100);//creates and initilizes object s with 100 value
                                                           student s1(s);//calls copy constructor of s1 and initialize with existing object s1 of same class
                                                        student s2=s ;//equivalent to above statement,another way to call copy constructor
                                                       
                                                           cout<<"\n roll of s is:";
                                                           s.display();
                                                           cout<<"\n roll of s1 is:";
                                                           s1.display();
                                                          cout<<"\n roll of s2 is:";
                                                           s2.display();
                                                           getch();
                                                           return 0;
                                                           }
