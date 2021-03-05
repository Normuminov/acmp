#include <iostream>

int main()
{
	long long n, sum = 0;
	
	std::cin >> n;
	
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	
	std::cout << sum;
	
	return 0;
}

