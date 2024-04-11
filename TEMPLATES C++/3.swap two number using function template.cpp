//SWAP TWO NUMBERS USING FUNCTION TEMPLATE
#include<iostream>
using namespace std;

template<class T>
T swap(T &m,T &n);


T swap(T &m,T &n)
{
     T temp;
     temp=m;
     m=n;
     n=temp;
     
     return 0;
}
int main()
{
         int a,b;
        cout<<"enter two integer values";
         cin>>a>>b;
         swap(a,b); //call function template for int
        cout<<"a = "<<a<<"  b= "<<b;
//         float x,y;
//         cout<<"\nenter two float values";
//         cin>>x>>y;
//         swap(x,y);//call function template for float
//         cout<<"x ="<<x<<"  y= "<<y;
//         char c1,c2;
//         cout<<"\nenter two charactter values ";
//         cin>>c1>>c2;
//         swap(c1,c2); //call function template for character
//         cout<<"c1 = "<<c1<<"  C2= "<<c2;
}
         
         
         
                      
