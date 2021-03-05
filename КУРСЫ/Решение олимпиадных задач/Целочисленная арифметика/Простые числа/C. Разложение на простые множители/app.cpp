#include <iostream>
#include <string>
#include <iterator>
#include <list>

std::string factorise(int);

int main()
{

	int n;

	std::cin >> n;
	
	std::cout << factorise(n);

	return 0;
}

std::string factorise(int n)
{
	
	std::string result;
	std::list<int> primes;
	
	for (int i = 2; i <= n; ++i)
		primes.push_back(i);
	
	for (auto i = primes.begin(); i != primes.end(); ++i)
		for (auto j = std::next(i, 1); j != primes.end(); ++j)
			if (*j % *i == 0)
			{
				auto temp = prev(j, 1);
				primes.erase(j);
				j = temp;
			}
	
	for (auto& i : primes)
	{
		while (n % i == 0)
		{
			n /= i;
			result += std::to_string(i);
			result += "*";
		}
	}
	
	result.erase(--result.end());
	
	return result;
}

