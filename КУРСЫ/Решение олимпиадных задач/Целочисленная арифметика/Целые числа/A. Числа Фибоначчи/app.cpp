#include <iostream>

long long fib(long long);

int main()
{
	long long n;
	
	std::cin >> n;
	
	std::cout << fib(n);
	
	return 0;
}

long long fib(long long n)
{
	switch (n)
	{
		case 0: return 0;
		case 1: return 1;
		default:
			return fib(n - 1) + fib(n - 2);
	}
}

