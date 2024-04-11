//read write in same program
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main()
{
    ofstream x("name.txt");
    char ch;
    cin.get(ch);
    while(ch!='.')
    {
                 x<<ch;
                     cin.get(ch);
    }
    x.close();
    ifstream x1("name.txt");
    x1.get(ch);
     while(x1.eof()==0)
    {
      cout<<ch;
                     x1.get(ch);
               
                     
    }
    getch();
}
