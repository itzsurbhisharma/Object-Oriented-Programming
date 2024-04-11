//PROGRAM TO ILLUSTRATE MULTI-LEVEL INHERITANCE---[TEACHER ->DEPARTMENT->COLLEGE]

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
class teacher:public dept
{
private:
char tname[20];
int uid;
public: 
void get()
{
dept::get();
cout<<"\nenter the teacher name and Uid";
cin>>tname>>uid;
}
void display()
{
dept::display();
cout<<"\nTeacher name is="<<tname<<endl<<"UID is ="<<uid;
}
};
main()
{
teacher t;
t.get();
t.display();
}
                                                                              
