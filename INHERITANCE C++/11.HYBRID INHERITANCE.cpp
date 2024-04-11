//PROGRAM TO ILLUSTRATE USE OF HYBRID INHERITANCE

#include<conio.h>
#include<iostream>
using namespace std;
class college
{
      protected:
                char cname[30];
                char city[30];
                public:
                       void get()
                       
                       {
                            cout<<"enter the college name and city name"<<endl;
                            cin>>cname>>city;
                            }
                            void display()
                            {
                                 cout<<"College name is "<<cname<<endl;
                                 cout<<"City name is "<<city<<endl;
                                 }
                                 };//end of college class
                                 class dept:public college
                                 {
                                       protected:
                                                 char dname[20];
                                                 public:
                                                        void get()
                                                        {
                                                             college::get();
                                                             cout<<"\nEnter the department name";
                                                             cin>>dname;
                                                             }
                                                             void display()
                                             {
                                                             college::display();
                                                             cout<<"\nDepartment is : "<<dname;
                                                             }
                                                             };
                                                             class education
                                                             {
                                                                   protected:
                                                                             char degree[20];
                                                                             
                                                                             public:
                                                                                    void get()
                                                                                    {college::get();
                                                                                         cout<<"Enter degree \n";
                                                                                         cin>>degree;
                                                                                         }
                                                                                         void display()
                                                                                         {college::display();
                                                                                              cout<<"Degree---"<<degree<<endl;
                                                                                              }
                                                                                              };
                                                             class teacher:public dept,public education
                                                             {
                                                                   private:
                                                                           char tname[20];
                                                                           int uid;
                                                                           public: 
                                                                             void get()
                                                        {
                                                             dept::get();
                                                             education::get();
                                                             cout<<"\nenter the teacher name and Uid";
                                                             cin>>tname>>uid;
                                                             }
                                                              void display()
                                             {
                                                             dept::display();
                                                             education::display();
                                                             cout<<"\nTeacher name is="<<tname<<endl<<"UID is ="<<uid;
                                                             }
                                                             };
                                                            main()
                                                            {
                                                                  teacher t;
                                                                  t.get();
                                                                  t.display();
                                                                  getch();
                                                                  return 0;
                                                                  }                 

                           
