#include<iostream>
void main()
{
	int sum = 0;
	int value;
	while (std::cin >> value)
		sum += value;
	std::cout << "Sum is " << sum << std::endl;
}