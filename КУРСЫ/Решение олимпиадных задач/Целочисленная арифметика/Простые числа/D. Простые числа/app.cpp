#include <iostream>
#include <string>
#include <cmath>
#include <list>
#include <vector>
 
void factorise(int, int);

int main()
{
 
    int m, n;
 
    std::cin >> m >> n;
 
    factorise(m, n);
 
    return 0;
}
 
void factorise(int m, int n)
{
    std::list<int> primes;
	std::vector<int> result;
    
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
    
    // check for prime numbers in range m - n
    for (int i = m; i <= n; ++i)
    {
    	result.push_back(i);
    	
    	for (auto j = primes.begin(); *j < n; ++j)
    	{
    		if (i % *j == 0)
			{
				result.pop_back();
    			break;
			}
		}
	}
    
    // printing out the result
    if (result.empty())
    	std::cout << "Absent";
    else
    	for (auto i : result)
	   		std::cout << i << std::endl;
}

