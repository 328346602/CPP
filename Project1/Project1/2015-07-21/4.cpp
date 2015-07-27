#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
void main()
{
	int i1,i2;
	cout<<"input a number"<<endl;
	cin>>i1;
	cout<<"input the power"<<endl;
	cin>>i2;
	unsigned long i3,i4=1;
	for(int i=1;i<=i2;i++)
	{
		i4=i4*i1;
		cout<<"the "<<i<<"th="<<i4<<endl;
	}
	cout<<"the "<<i2<<" power of "<<i1<<" is "<<i4-1<<endl;
}