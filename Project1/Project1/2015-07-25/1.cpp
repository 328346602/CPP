#include<iostream>
#include<string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

void main()
{
	string big="big",small="small";
	string s1=big;
	if(big==small)
	cout<<"big == small"<<endl;
	if(big<=s1)
	cout<<"big <= s1"<<endl;
	
	string substr = "Hello";
    string phrase = "Hello World";
    string slang = "Hiya";
	if(substr<=phrase)
	cout<<"substr<=phrase"<<endl;
	else
	cout<<"phrase<=substr"<<endl;
	
	if(phrase<=slang)
	cout<<"phrase<=slang"<<endl;
	else
	cout<<"slang<=phrase"<<endl;
	
	if(substr<=slang)
	cout<<"substr<=slang"<<endl;
	else cout<<"slang<=substr"<<endl;
}