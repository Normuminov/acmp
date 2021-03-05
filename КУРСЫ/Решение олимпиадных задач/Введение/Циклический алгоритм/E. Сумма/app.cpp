#include <iostream>

int main()
{
	long long n, d;
	
	std::cin >> n;
	
	d = n > 1 ? 1 : -1;
	
	n = abs(n - 1) + 1;
	
	std::cout << n*(2 + (n - 1)*d)/2;
	
	return 0;
}

