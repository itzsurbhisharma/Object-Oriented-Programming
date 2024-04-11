//NO PARAMETER WITH RETURN VALUE
#include<conio.h>
#include<iostream.h>
int main()
{						

//int a=10,b=20;
int sum();	//function declaration
int c=sum();	 //actual arguments
cout<<"sum is "<<c;		
getch();
}
int sum()		//formal arguments
{
int x=10,y=30;
return(x+y);         //*return value
}


