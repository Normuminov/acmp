#include <iostream>

int main()
{
	long long n;
	
	std::cin >> n;
	
	int
		prev1 = 1,
		prev2 = 0,
		i = 1,
		fib;
	
	for (; fib < n; ++i)
	{
		int temp = fib;
		fib = prev1 + prev2;
		prev2 = prev1;
		prev1 = temp;
	}
	
	if (fib == n)
	{
		std::cout << 1 << std::endl;
		std::cout << i << std::endl;
	}
	else
		std::cout << 0 << std::endl;
	
	return 0;
}

