#include <iostream>
#include<string>
class math
{
public:
	static long mi(int x, int mi)
	{
		int result = 1;
		for (int i = 0; i < mi; i++)
		{
			result *= x;
			std::cout << "��" << i << "��" << std::endl;
		}
		return result;
	}
};
