#include<iostream>
void main()
{
	int x, y, sum = 0;
	int count = 0;
	std::cout << "Input x:" << std::endl;
	std::cin >> x;
	std::cout << "Input y:" << std::endl;
	std::cin >> y;
	if (x > y)
	{
		std::cout << "the numbers are: " << std::endl;
		for (y; y <= x; y++, ++count)
		{
			//std::cout << y << std::endl;
			std::cout << y << " ";
			if (count % 10 == 9)
			{
				std::cout<<std::endl;
			}
		}
	}
	else if (x < y)
	{
		std::cout << "the numbers are: " << std::endl;
		for (x; x <= y; x++, ++count)
		{
			//std::cout << x << std::endl;
			std::cout << x << " ";
			if (count % 10 == 9)
			{
				std::cout << std::endl;
			}
		}
	}
	else
	{
		std::cout << "the numbers is: " << std::endl;
		std::cout << x << std::endl;
	}
}