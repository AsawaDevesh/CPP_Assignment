#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main()
{
	fstream fin;
	string str;
	int size;
	char ch='s';
	int count=0;
	
	fin.open("file.txt",ios::in);
	
	if(!fin)
	{
		cout<<"File doesnt exist"<<endl;
	}
	else
	{
		while(fin>>str)
		{
			size=str.length();
			if(str[size-1]==ch)
			{
				count++;
			}
		}
	}
	
	cout<<"Total no. of words that end with 's' is : "<<count<<endl;
	return 0;
}