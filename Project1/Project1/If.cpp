#include<iostream>
void main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2;
	int lower, upper;
	if (v1 < v2)
	{
		lower = v1;
		upper = v2;
	}
	else if (v1>v2)
	{
		lower = v2;
		upper = v1;
	}
	int sum = 0;
	for (lower; lower <= upper; lower++)
	{
		sum += lower;
	}
	std::cout << "Sum of " << v1 << " to " << v2 << " is " << sum << std::endl;
}