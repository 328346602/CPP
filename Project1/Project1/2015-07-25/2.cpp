#include<iostream>
#include<string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

void main()
{
	string s1="some thing";
	for(string::size_type i=0;i<s1.size();i++)
		cout<<s1[i]<<endl;
		
	for(string::size_type i=0;i<s1.size();i++)
		s1[i]-=32;
		cout<<s1<<endl;
}