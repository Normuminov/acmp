#include <bits/stdc++.h>

using namespace std;

vector<long long> factors(long long n);

int main()
{
	long long N, M, count = 0;
	vector<long long> v1, v2;	
	
	cin >> N >> M;
	
	v1 = factors(N);
	v2 = factors(M);
	
	for (auto i = v1.begin(), j = v2.begin(); i != v1.end() and j != v2.end(); )
	{
		if (*i == *j)
		{
			i++;
			j++;
		}
		else if (*i > *j)
		{
			count++;
			j++;
		}
		else if (*j > *i)
		{
			count++;
			i++;
		}
	}
	
	cout << count;
	
	return 0;
}

vector<long long> factors(long long N)
{
	long long n = N, i = 2;
	
	vector<long long> primes, factors;
	
	for (int i = 2; i <= n/2; i++)
	{
		primes.push_back(i);
	}
	
	for (auto i = primes.begin(); i != primes.end(); ++i)
	{
		for (auto j = primes.begin(); j != i; ++j)
		{
			if (*j % *i == 0)
			{
				primes.erase(i--);
				break;
			}
		}
	}
	
	for (auto i : primes)
	{
		while (n % i == 0)
		{
			n /= i;
			factors.push_back(i);
		}
	}
	
	if (factors.empty())
		factors.push_back(N);
	
	return factors;
}

