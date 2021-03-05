#include <iostream>
#include <list>

int bertran(int);

int main()
{

	int n;
	
	std::cin >> n;
	
	std::cout << bertran(n);
	
	return 0;
}

int bertran(int n) 
{
	std::list<int> primes = {2};

	for (int i = 3; i < 2*n; ++i) 
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
	
	for (auto i = primes.begin(); i != primes.end(); ++i)
		if (*i > n)
			return std::distance(i, primes.end());
}

