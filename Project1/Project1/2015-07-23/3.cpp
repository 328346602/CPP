#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

void main()
{
	string line;
	while(getline(cin,line))
	cout<<line+"\n"<<endl;
}