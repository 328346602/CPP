#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

void main()
{
	string s;
	cin>>s;
	cout<<"the value of s is "+s<<endl;
	while(cin>>s)
	cout<<s<<endl;
}