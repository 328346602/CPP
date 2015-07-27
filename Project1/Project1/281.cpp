#include<iostream>
#include<string>
using namespace std;
class Foo {
	// empty
};// Note: no semicolon
int main()
{
	return 0;
}

class Person{
	std::string Name;
	int age;
	std::string sex;
};

class Tel_Num{
public:
private:
	int countryNum;
	int areaNum;
	int phoneNum;
};

class Address{
private:
	std::string country;
	std::string state;
	std::string city;
	std::string street;
	std::string num;
};

class Employee{
	Tel_Num t;
	Address a;
	Person p;
};

class Student{
	Person p;
	Address a;
	Tel_Num t;
};

class Male{
	Person p;
};