#include <iostream>
#include <string>
extern const std::string s1("Hello ");
extern const int i = 1234;
extern int i2 = 2222;
int main()
{
	std::string s2 = "world"; // s2 has local scope
	// uses global s1; prints "hello world"
	std::cout << s1 << " " << s2 << std::endl;
	int s1 = 42; // s1 is local and hides global s1
	// uses local s1;prints "42 world"
	std::cout << s1 << " " << s2 << std::endl;
	return 0;
}