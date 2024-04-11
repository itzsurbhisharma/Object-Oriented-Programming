#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main()
{
	
	int arr[3];
	ifstream x("e1703.txt");
	x.read((char*)&arr,sizeof(arr));
	for(int i=0;i<3;i++)
	{
		cout<<arr[i];
		}	
	}
	

