//use of default to calculate the volume of box
#include<iostream>
using namespace std;
void volume(int =10,int w=10,int h=10); //fun declaration
int main()
{
volume(); //equivalent to volume(10,10,10)
volume(5); //equivalent to volume(5,10,10)
volume(8,6); //equivalent to volume(8,6,10)
volume(6,4,5);
return 0;
}
void volume(int l,int w,int h)
{
     int z;
     z=l*w*h;
     cout<<"volume is="<<z<<"\n";
     }
     
