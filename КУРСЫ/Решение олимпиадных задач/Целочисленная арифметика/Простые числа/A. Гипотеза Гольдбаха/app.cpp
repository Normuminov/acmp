#include <iostream>
#include <list>
#include <utility>

std::pair<int, int> goldbah(int n);

int main()
{

	int n;
	
	std::cin >> n;
	
	auto result = goldbah(n);
	
	std::cout << result.first << " " << result.second;

	return 0;
}

std::pair<int, int> goldbah(int n) 
{
	std::list<int> primes = {2};

	for (auto i = 3; i <= 1001; ++i) 
	{
		auto current = --primes.end();
		
		for (auto previous = primes.begin(); previous != current; ++previous)
		{
			if (*current % *previous == 0) 
			{
				primes.erase(current);
				break;
			}
		}
		
		primes.push_back(i);
	}

	primes.pop_back();
	
	for (auto& i : primes)
		for (auto& j : primes)
			if (i + j == n)
				return std::pair<int, int>(i, j);
}

