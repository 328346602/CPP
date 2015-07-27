#include"sales_item.h"
#include <iostream>
//void main()
//{
//	sales_item book1, book2, sum;
//	std::cin >> book1;
//	sum += book1;
//	while (true)
//	{
//		std::cin >> book2;
//		if (book1.same_isbn(book2))
//		{
//			sum += book2;
//			std::cout << "<temp.same_isbn(book1) is true!>" << std::endl;
//		}
//		else
//		{
//			std::cout << "<temp.same_isbn(book1) is not true!>" << std::endl;
//			break;
//		}
//	}
//	
//	std::cout << sum << std::endl;
//}
//
int main()
{
	 //declare variables to hold running sum and data for the nextrecord
	Sales_item total, trans;
	 //is there data to process?
	if (std::cin >> total) {
		 //if so, read the transaction records
		while (std::cin >> trans)
		if (total.same_isbn(trans))
			 //match: update the running total
			total = total + trans;
		else {
			 //no match: print & assign to total
			std::cout << total << std::endl;
			total = trans;
		}
		 //remember to print last record
		std::cout << total << std::endl;
	}
	else {
		 //no input!, warn the user
		std::cerr << "no data?!" << std::endl;
		return -1; // indicate failure
	}
	return 0;
}