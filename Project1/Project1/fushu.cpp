#include<iostream>

void main()
{
	int v[5];
	int num = 0;
	for (int i = 0; i < 5; i++)
	{
		std::cin >> v[i];
	}
	for (int i = 0; i < 5; i++)
	{
		if (v[i] < 0)
			num++;
	}
	std::cout << "�����ĸ���Ϊ" << num << std::endl;
	return;
}