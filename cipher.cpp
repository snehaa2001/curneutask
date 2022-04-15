#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main ()
{
	int ans, key;
	string in;
	cout<<"Press 1 to Encrypt file.\nPress 2 to Decrypt file."<<endl;
	cin>>ans;
	cout<<"Enter File Name -"<<endl;
	cin>>in;
	cout<<"Enter Key -"<<endl;
	cin>>key;
	if (ans == 1)
	{
		char c;
		ifstream fin;
		ofstream fout;
		fin.open(in.c_str(), ios::binary);
		in = "output";
		fout.open(in.c_str(), ios::binary);
		while (!fin.eof())
		{
			fin>>noskipws>>c;
			int temp = (c + key);
			fout<<(char)temp;
		}
		fin.close();
		fout.close();
	}
	else if (ans == 2)
	{
		string ft;
		cout<<"Enter File Type -"<<endl;
		cin>>ft;//assumed that they have entered type with '.' in front.
		char c;
		ifstream fin;
		ofstream fout;
		fin.open(in.c_str(), ios::binary);
		in = "qutput" + ft;
		fout.open(in.c_str(), ios::binary);
		while (!fin.eof())
		{
			fin>>noskipws>>c;
			int temp = (c - key);
			fout<<(char)temp;
		}
		fin.close();
		fout.close();
	}
	getch();//If you want to remove this you can. Then you can also remove conio.h header.
}
