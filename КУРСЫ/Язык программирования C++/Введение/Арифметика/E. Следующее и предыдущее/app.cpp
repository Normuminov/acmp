#include <iostream>

int main()
{
	int n;
	
	std::cin >> n;
	
	std::cout << "The next number for the number " << n << " is " << n + 1 << ".\n";
	std::cout << "The previous number for the number " << n << " is " << n - 1 << ".\n";
	
	return 0;
}

