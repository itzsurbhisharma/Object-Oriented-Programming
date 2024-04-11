//DISPLAY THE ACCOUNT INFORMATION OF CUSTOMER OF A BANK (INTIALIZER LIST)

#include<iostream>
using namespace std;
class item
{
      
              int number;
              float cost;
              public:
                     void getdata(int a, float b);
                     void putdata(void)
                     {
                     	cout<<"number"<<number<<"\n";
                     	cout<<"cost"<<cost<<"\n";
					 }
                     };
                     void item::getdata(int a, float b)
                     {
                          number=a;
                          cost=b;
                          }
                          main()
                          {
                               item x;
                               cout<<"object x\n";
                               x.getdata(100,299.95);
                               x.putdata();
                               
                               item y;
                               cout<<"\nobject y\n";
                               x.getdata(200,175.50);
                               x.putdata();
                               
                                }
                                
                                          
