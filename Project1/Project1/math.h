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
			std::cout << "µÚ" << i << "´Î" << std::endl;
		}
		return result;
	}
};
