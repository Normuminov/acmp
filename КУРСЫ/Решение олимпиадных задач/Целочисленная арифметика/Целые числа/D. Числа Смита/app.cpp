#include <iostream>
#include <fstream>
#include <cmath>
#include <list>
#include <vector>

bool is_smith(int n);
int sum(int n);
int fsum(int n);

int main()
{
	
	std::ifstream in("input.txt");
	std::ofstream out("output.txt");
	std::vector<int> nums;
	
	while (!in.eof())
	{
		int value;
		
		in >> value;
		
		nums.push_back(value);
	}
	
	for (auto i : nums)
		if (is_smith(i))
			out << 1;
		else
			out << 0;
	
	return 0;
}

bool is_smith(int n)
{
	if (sum(n) == fsum(n))
		return true;
	else
		return false;
}

int sum(int n)
{
	int sum = 0;
	
	for (; n; n /= 10)
		sum += n % 10;
	
	return sum;
}

int fsum(int n)
{
    std::list<int> primes;
	int result = 0;
    
    // first create a list of prime numbers from 0 to sqrt(n)
    for (int i = 2; i <= sqrt(n); ++i)
    {
        auto current = prev(primes.end(), 1);
 
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
    
    // check n for prime numbers
    for (auto i = primes.begin(); i != primes.end(), n; ++i)
    {
    	if (n % *i == 0)
    	{
    		result += sum(*i);
    		n /= *i;
		}
	}
    
    return result;;
}

