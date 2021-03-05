#include <iostream>

int main()
{
	long long n;
	
	std::cin >> n;
	
	if (n % 10)
		std::cout << n / 10 + 1;
	else
		std::cout << n / 10;
	
	return 0;
}

