#include<iostream>
void main()
{
	/*int sum = 0;
	for (int i = 0; i <= 10; i++)
	{
		sum += i;
	}*/
	int sum = 0, i = 50;
	while (i <= 100)
	{
		sum += ++i;
	}
	std::cout << "Sum of 1 to 10 is " << sum;//<< std::endl;
}