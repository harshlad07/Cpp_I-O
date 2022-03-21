#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream f;
	
	f.open("f1.txt");
	int cnt=0;
	string s;
	
	if(!f)
	{
		cout<<"\nFile not created";
	}
	else
	{
	
		while(f>>s)
		{
			if(s[0]=='e')
			{
				cnt++;
			}
		}
		cout<<cnt<<endl;
		f.close();
	}
}
