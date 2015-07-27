#include<iostream>
void main()
{
	std::cout << "/*";
	std::cout << "*/";
	//std::cout << /* "*/" */;
	int v1, v2;
	std::cin >> v1 >> v2;
	std::cout << "The sum of " << v1
	<< " and " << v2
	<< " is " << v1 + v2
		<< std::endl;
	
}