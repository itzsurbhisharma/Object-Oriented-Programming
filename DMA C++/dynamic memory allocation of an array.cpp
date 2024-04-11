//PROGRAM TO CALCULATE THE AVERGE OF N NUMBERS OF AN ARRAY BY ALLOCATING MEMORY DYNAMICALLY
#include<conio.h>
#include<iostream.h>
int main()
{
    void *p;
    int n,sum=0;
    cout<<"enter the number of elements";
    cin>>n;
    p=new int [n]; //allocates memory for n int values dynamically
    if(p==NULL)
    {
               cout<<"memory allocation error:";
               exit(0);
               }
               for(int i=0;i<n;i++)
               {
                       cout<<"enter value :"<<i+1<<"=";
                       cin>>*(p+i);
                       sum=sum+*(p+i);
                       }
                       float avg=float(sum)/n;
                       cout<<"avg of given value ="<<avg;
                       delete[] p;
                      // p[0]=1;
                       cout<<"\n"<<*(p+1);
                       getch();
                       return 0;
                       }
                       
    
