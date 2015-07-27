#include<iostream>
void main()
{
	int v1, v2;
	int bigger, smaller;
	std::cout << "请输入v1" << std::endl;
	std::cin >> v1;
	std::cout << "请输入v1" << std::endl;
	std::cin >> v2;
	if (v1 > v2)
	{
		bigger = v1;
		smaller = v2;
	}
	else if (v1 < v2)
	{
		bigger = v2; smaller = v1;
	}
	else
	{
		std::cout << "v1等于v2!" << std::endl;
		return;
	}
	std::cout << bigger << std::endl;
	return;
}