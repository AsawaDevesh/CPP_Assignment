#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream fin;
	string str;
	char ch='e';
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
			if(str[0]==ch)
			{
				count++;
			}
		}
	}
	
	cout<<"Total no. of words that start with 'e' is : "<<count<<endl;
}