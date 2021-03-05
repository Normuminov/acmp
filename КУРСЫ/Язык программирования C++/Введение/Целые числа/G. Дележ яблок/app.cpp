#include <iostream>

int main()
{
	long long n, k;
	
	std::cin >> n >> k;
	
	std::cout << k / n << " ";
	std::cout << k % n << " ";
	std::cout << n - k % n << std::endl;
	
	return 0;
}

