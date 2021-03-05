#include <iostream>

int main()
{
	int a, b;
	
	std::cin >> a >> b;
	
	if (a % b == 0 or b % a == 0)
		std::cout << 1;
	else
		std::cout << 69;
	
	return 0;
}

