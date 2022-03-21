#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

int main()
{
	fstream f;
	
	f.open("f1.txt");
	int cnt=0;
	string s;
	string str;
	
	if(!f)
	{
		cout<<"\nFile not created";
	}
	else
	{
	
		while(f>>s)
		{
			int i;
			i = s.length();
			if(s[i-1] == 's')
			{
				cnt++;
			}
		}
		cout<<cnt<<endl;
		f.close();
	}
}
