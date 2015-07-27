#include<iostream>
void main()
{
	int i = 10;
	int sum = 0;
	while (i > 0)
	{
		sum += i--;
	}
	std::cout << "Sum of 1 to 10 is " << sum;
}

//
//
//// error: missing ')' in parameter list for main
//int main(){
//	// error: used colon, not a semicolon after endl
//	std::cout << "Read each file." << std::endl;
//	// error: missing quotes around string literal
//		std::cout << "Update master." << std::endl;
//	// ok: no errors on this line
//	std::cout << "Write new master." << std::endl;
//	// error: missing ';' on returnstatement
//		return 0;
//}