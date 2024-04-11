//FIND MINIMUM OF TWO NUMBERS USING CLASS TEMPLATE
#include<iostream.h>
#include<conio.h>
template <class T>
class mix
{
T a,b;
public:

mix(T x, T y)
{
a=x;
b=y;
}
T max()
{
return (a>b?a:b);
}
};
 main()
{
mix<int> obj(10,20);
mix<float>obj(10.0,20.0);
cout<<"max value is"<<obj.max();
cout<<"float"<<obj.max();
getch();
}
