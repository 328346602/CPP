#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::string;
using std::endl;

void main()
{
	string s1,s2,s3;
	string s4="s4";
	string s5("s5");
	string s6(s5);
	string s7(3,'C');
	cin>>s1>>s2>>s3;
	cout<<s1+" "+s2+" "+s3+" "+s4+" "+s5+" "+s6+" "+s7<<endl;
}