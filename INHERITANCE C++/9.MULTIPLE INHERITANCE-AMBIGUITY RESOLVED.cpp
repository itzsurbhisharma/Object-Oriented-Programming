 //PROGRAM TO ILLUSTRATE THE MULTIPLE INHERITANCE(AMBIGUITY RESOLVED)
 //AMBIGUITY CAN BE RESOLVED EITHER BY SCOPE RESOLUTION OR BY OVERRIDING MEMBER FUNCTION
#include<iostream.h>
#include<conio.h>
class publisher
{
      protected:
                char pname[30];
                char place[30];
                public:
                       void get()
                       {
                            cout<<"\nEnter the publisher name and place";
                            cin>>pname>>place;
                            }
                            void display()
                            {
                                 cout<<"\nPublisher's Name = "<<pname<<"\n";
                                 cout<<"Place ="<<place<<"\n";
                                 }
                                 };
                                 class author
                                 {
                                       protected:
                                                 char aname[20];
                                                 public:
                                                 void get()
                                                 {     
                                                     cout<<"Enter the author name \n";
                                                     cin>>aname;
                                                     } 
                                                     void display()
                                                     {
                                                         
                                                          cout<<"Author's name is ="<<aname<<"\n";
                                                          }
                                                          };
                                                          class book:public publisher,public author
                                                          {
                                                                private:
                                                                        char title[20];
                                                                        float price;
                                                                        int pages;
                                                                        public:
                                                                               void get_book()
                                                                               { 
                                                                                    
                                                                                   publisher::get();
                                                                                   author::get();
                                                                                    cout<<"\nenter the title,pages and price ";
                                                                                    cin>>title;
                                                                                    cin>>pages>>price;
                                                                                    }
                                                                                    void display_book()
                                                                                    {    
                                                                                         publisher::display();//over-riding member function
                                                                                         author::display();//ambiguity resolving
                                                                                         cout<<"\ntitle = "<<title;
                                                                                         cout<<"\npages = "<<pages;
                                                                                         cout<<"\Price =  "<<price;
                                                                                         }
                                                                                         };
                                                                                         int main()
                                                                                         
                                                                                         {
                                                                                               publisher p;
                                                                                               author a;
                                                                                               book b;
                                                                                              // b.publisher::get();//ambiguity resolving using scope resolution
                                                                                               //b.author::get();
                                                                                              b.get_book();
                                                                                              // b.publisher::display();
                                                                                               //b.author::display();
                                                                                              b.display_book();
                                                                                            //   b.get();
                                                                                              // b.display();
                                                                                               getch();
                                                                                               
                                                                                               }
