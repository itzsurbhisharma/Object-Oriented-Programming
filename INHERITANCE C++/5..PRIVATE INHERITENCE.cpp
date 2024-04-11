//PROGRAM TO CALCULATE THE RESULT OF THE STUDENT USING PRIVATE INHERITANCE
#include<iostream.h>
#include<conio.h>
class stud
{
      private:
              int rollno;
              char name[20];
              public:
                     int x;
                     void read()
                     {
                          cout<<"enter roll no and name :";
                          cin>>rollno>>name;
                          }
                          void show()
                          {
                               cout<<"rollnumber is = "<<rollno;
                               cout<<"\n";
                               }
                           /*    protected:
                                         void hello()
                                         {
                                              cout<<"hello";
                                         } */
                               };
                               class result : private stud
                               {
                                     private:
                                             int m[4];
                                             double per;
                                             public:
                                                    //read();
                                                   int x=20;
                                                    cout<<x;
                                                    void input();
                                                    void cal();
                                                    void display();
                                                    };
                                                    void result::input()
                                                    {
                                                        // hello();
                                                         read(); 
                                                         //accessing base's inherited member
                                                         cout<<"enter marks of 4 subjects";
                                                         for(int i=0;i<4;i++)
                                                         cin>>m[i];
                                                         }
                                                         void result:: cal()
                                                         {
                                                              int tot_marks=0;
                                                              for(int i=0;i<4;i++)
                                                              tot_marks+=m[i];
                                                              per=double(tot_marks)/4;
                                                              }
                                                              void result::display()
                                                              {
                                                                   show(); //accessing base's inherited member
                                                                   cout<<"\n Marks "<< "\t";
                                                                   for(int i=0;i<4;i++)
                                                                   cout<<m[i];
                                                                   cout<<"\n Percentage ="<<per;
                                                                   }
                                                                 
                                                                   int main()
                                                                   {
                                                                  
                                                                  
                                                                  
                                                                       result r1;
                                                                       stud s1;
                                                                       s1.read();
                                                                       //r1.read();
                                                                       r1.input(); //Inputting student information
                                                                       r1.cal(); //calculating result of a student
                                                                   
                                                                       r1.display(); //displaying student information
                                                                       getch();
                                                                       return 0;
                                                                       }
                                                                       
                                                                   
                                                         
                          
