#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream f;
	f.open("f1.txt");
	int cnt=0;
	string s;
	string word = ("the");
	
	if(!f)
	{
		cout<<"\nFile not open";
	}
	else
	{
		while(f>>s)
		{
			if(s == word)
			{
				cnt++;
			}
		}
		cout<<cnt<<endl;
		f.close();
	}
}
