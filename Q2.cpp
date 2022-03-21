#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream f;
	
	f.open("f1.txt");
	int cnt=0;
	string s;
	string w = ("a");
	
	if(!f)
	{
		cout<<"\nFile not created";
	}
	else
	{
	
		while(f>>s)
		{
			if(s==w)
			{
				cnt++;
			}
		}
		cout<<cnt<<endl;
		f.close();
	}
}
