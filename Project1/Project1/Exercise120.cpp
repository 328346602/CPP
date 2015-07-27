#include<iostream>

void main()
{
	int x, y, sum = 0;
	std::cout << "enter two numbers:";
	std::cin >> x >> y;
	/*for (x; x < y; x++)
	{
		sum += x;
	}
	std::cout << sum << std::endl;*/

	while (x < y)
	{
		sum += x;
		x++;
	}
	std::cout << sum << std::endl;
}